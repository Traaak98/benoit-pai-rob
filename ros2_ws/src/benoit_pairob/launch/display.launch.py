import launch
from launch.actions import IncludeLaunchDescription
from launch.substitutions import Command, LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
import launch_ros
import os

def generate_launch_description():
    pkg_share = launch_ros.substitutions.FindPackageShare(package='benoit_pairob').find('benoit_pairob')
    tennis_court_share = launch_ros.substitutions.FindPackageShare(package='tennis_court').find('tennis_court')
    default_model_path = os.path.join(pkg_share, 'src/description/benoit_pairob_description.urdf')
    default_rviz_config_path = os.path.join(pkg_share, 'rviz/urdf_config.rviz')
    tennis_court_launch_file = os.path.join(tennis_court_share, "launch", "tennis_court.launch.py")
    tennis_court_launch = IncludeLaunchDescription(
      PythonLaunchDescriptionSource(tennis_court_launch_file)
    )

    robot_state_publisher_node = launch_ros.actions.Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': Command(['xacro ', LaunchConfiguration('model')])}]
    )
    joint_state_publisher_node = launch_ros.actions.Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher'
    )
    rviz_node = launch_ros.actions.Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')]
    )
    spawn_entity = launch_ros.actions.Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-entity', 'benoit_pairob', '-topic', 'robot_description', '-x', '3', '-y', '-3', '-z', '1'],
        output='screen'
    )
    joycon_node = launch_ros.actions.Node(
        package='joy',
        executable='joy_node',
        name='joy_node'
    )
    teleop_control_node = launch_ros.actions.Node(
        package='my_robot_control',
        executable='my_robot_control_node',
        name='my_robot_control'
    )

    vision_node = launch_ros.actions.Node(
        package='vision_pkg',
        executable='detect_ball',
        name='vision'
    )

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(name='model', default_value=default_model_path,
                                            description='Absolute path to robot urdf file'),
        launch.actions.DeclareLaunchArgument(name='rvizconfig', default_value=default_rviz_config_path,
                                            description='Absolute path to rviz config file'),
        joint_state_publisher_node,
        robot_state_publisher_node,
        tennis_court_launch,
        spawn_entity,
        rviz_node,
        vision_node,
        joycon_node,
        teleop_control_node
    ])