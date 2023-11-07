# Tutoriels divers
## Sommaire 
1. [Créer un package debian à partir d'un package ROS2 et l'installer sur son ordinateur](#créer-un-package-debian-à-partir-dun-package-ros2-et-linstaller-sur-son-ordinateur)
2. [La même chose dans le pipeline](#la-m%C3%AAme-chose-dans-le-pipeline)

## Créer un package debian à partir d'un package ROS2 et l'installer sur son ordinateur

Voir le tutoriel dont sont tirées la plupart des commandes [ici](https://github.com/carlosmccosta/ros_development_tools/blob/master/catkin/create_deb_files_for_ros_packages.md).

Etapes à suivre :

### Bloom

Installer bloom:
```bash
sudo apt-get install python-bloom
sudo apt-get install fakeroot
sudo apt-get install dpkg-dev debhelper
```

* Pour générer des fichiers .deb pour des paquets qui dépendent de paquets qui ne figurent pas dans les listes officielles de rosdep, on doit : 
  * Créer un fichier yaml (dans le workspace contenant les packages, par exemple) spécifiant les packages locaux. Chez nous, c'est ```bloom-config.yml``` qui contient :
    ```
    package_name:
        ubuntu: [benoit-pairob]
    ```
  * Créer un fichier dans les sources de rosdep :
    ```bash
    sudo gedit /etc/ros/rosdep/sources.list.d/10-local.list
    ```
  * Dans lequel on écrit le chemin absolu vers le fichier yaml précédent :
    ```
    yaml file:/home/.../benoit-pai-rob/bloom-config.yaml
    ```
  * On update rosdep:
    ```bash
    rosdep update
    ```
  * Pour vérifier que rosdep trouve le package, on peut utiliser :
    ```bash
    rosdep resolve package_name
    ```


### Generer le fichier .deb

* Source ROS2 et le projet
  ```
  source /opt/ros/foxy/setup.bash
  source ~/.../ros2_ws/install/setup.bash
  ```
* Se déplacer dans le dossier du package (avec le CMakelists.txt et package.xml)
  ```
  cd src/benoit-pairob
  ```
* Update et vérifier que tout va bien avec rosdep :
  ```bash
  rosdep update
  rosdep check --from-paths . --ignore-src --rosdistro="$(rosversion -d)"
  ```
  > Note pour notre package : il faut changer la dépendance ```rviz``` en ```rviz2``` dans le package.xml
  ```bash
  rosdep db | grep package_name
  ```
* Générer un dossier de configuration pour le debian :
  ```bash
  bloom-generate rosdebian --ros-distro $(rosversion -d)
  ```
* Générer le fichier .deb !!! :
  ```bash
  fakeroot debian/rules binary
  ```
* Le fichier .deb est généré dans le dossier parent du package (dossier src)


### Installer le fichier .deb quand on l'a localement
```
sudo dpkg -i ../nomdufichier.deb
```

### Désisntaller le fichier .deb
```
sudo apt remove ros-humble-benoit-pairob
```

> Todo : faire en sorte que les versions s'update automatiquement pour changer le nom du debian notamment !

## La même chose dans le pipeline

```yaml
deploy-job:      # This job runs in the deploy stage.
  stage: deploy  # It only runs when *both* jobs in the test stage complete successfully.
  environment: production
  script:
    - echo "Deploying application..."
    # pour le changement automatique de version
    # catkin_generate_changelog
    # catkin_prepare_release
    # git add src/*/CHANGELOG.rst
    # git commit -m "CHANGELOG.rst"
    - echo "yaml file:/home/user/benoit-pai-rob/bloom_config.yml" >> /etc/ros/rosdep/sources.list.d/10-local.list # vérfier le path 
    - rosdep update
    - source /opt/ros/humble/setup.bash
    - cd ros2_ws/
    - source install/setup.bash
    - cd src/benoit_pairob/
    - rosdep update
    - echo "Générer dossier debian"
    - bloom-generate rosdebian --ros-distro humble --os-name ubuntu --os-version jammy -d
    - echo "Création du deb"
    - fakeroot debian/rules binary
    - echo "Fichier .deb créé, envoi sur le serveur"
    - cd ..
    - 'curl -u "$ID_CURL:$PSSWRD" -H "Content-Type:multipart/form-data" --data-binary "@$(find . -name *.deb)" "http://172.19.48.50:8081/repository/supernana_dev/"'
    - echo "Application successfully deployed."
  rules:
    - if: $CI_COMMIT_BRANCH =~ /^feature/ # pour tester
    - if: $CI_COMMIT_BRANCH == "develop"

```