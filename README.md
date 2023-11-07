# Tennis Ball Collector

Ceci est un template de dépôt Git pour le cours d'ingénierie système et modélisation robotique à l'ENSTA Bretagne en 2023.


## Lancer la simulation

### Dépendences

* **joint_state_publisher**: Un package permettant de publier l'état des joints d'un robot pour la visualisation et la simulation.

* **robot_state_publisher**: Un package utilisé pour diffuser la cinématique d'un robot à partir de fichiers URDF dans le système ROS.

* **robot_localization**: Un package pour la fusion de capteurs et l'estimation de l'état du robot dans le contexte de la navigation robotique.

* **rviz**: Un outil de visualisation 3D interactif pour la visualisation en temps réel de données robotiques, telles que des capteurs, des cartes et des modèles robotiques.

* **xacro**: Un outil permettant de simplifier la création et la gestion des descriptions de robots URDF en utilisant une syntaxe XML simplifiée et extensible.


### Démarrer la simulation

###### A compléter avec la/les commande(s) à lancer.
```bash
# TODO
```


## Groupe

### Membres

* [Clara GONDOT](mailto:clara.gondot@ensta-bretagne.org)
* [Rania ZIANE](mailto:rania.ziane@ensta-bretagne.org)
* [Marguerite MIALLIER](mailto:marguerite.miallier@ensta-bretagne.org)
* [Apolline DEVAULCHIER](mailto:apolline.de_vaulchier@ensta-bretagne.org)
* [Emilie LEDOUSSAL](mailto:emilie.ledoussal@ensta-bretagne.org)
* [Ludovic MUSTIERE](mailto:ludovic.mustiere@ensta-bretagne.org)
* [Titouan BELIER](mailto:titouan.belier@ensta-bretagne.org)


### Gestion de projet
Lien vers notre gestionnaire de projet Agile : [Taïga](https://tree.taiga.io/project/zianerania-benoit_pairob/timeline).


## Structure du dépôt

Ce dépôt doit être cloné dans le dossier `src` d'un workspace ROS 2.

### Package `tennis_court`

Le dossier `tennis_court` est un package ROS contenant le monde dans lequel le robot ramasseur de balle devra évoluer ainsi qu'un script permettant de faire apparaître des balles dans la simulation.
Ce package ne doit pas être modifié.
Consulter le [README](tennis_court/README.md) du package pour plus d'informations.


### Documents

Le dossier `docs` contient tous les documents utiles au projet:
- Des [instructions pour utiliser Git](docs/GitWorkflow_fork.md)
- Un [Mémo pour ROS 2 et Gazebo](docs/Memo_ROS2.pdf)
- Les [slides de la présentation Git](docs/GitPresentation.pdf)


### Rapports

Le dossier `reports` doit être rempli avec les rapports d'[objectifs](../reports/GoalsTemplate.md) et de [rétrospectives](../reports/DebriefTemplate.md) en suivant les deux templates mis à disposition. Ces deux rapports doivent être rédigés respectivement au début et à la fin de chaque sprint.
