from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='arm_pkg',
            executable='joint_control.py',
            name='joint_control_node',
            output='screen'
        ),
    ])
