import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    # Get the package directory
    arm_pkg_share = get_package_share_directory('arm_pkg')
    arm_moveit_config_share = get_package_share_directory('arm_moveit_config')

    # Include the MoveIt launch file
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(arm_moveit_config_share, 'launch', 'demo.launch.py')
        )
    )

    # Define the robot state publisher node
    rsp_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': Command(['xacro ', os.path.join(arm_pkg_share, 'description', 'robot.urdf.xacro')])}]
    )

    return LaunchDescription([
        rsp_node,
        moveit_launch,
    ])
