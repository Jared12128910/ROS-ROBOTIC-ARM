#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import math

class JointControlNode(Node):
    def __init__(self):
        super().__init__('joint_control_node')
        self.joint_publisher = self.create_publisher(JointState, 'joint_states', 10)
        self.timer = self.create_timer(0.1, self.publish_joint_states)  # Use a consistent timer interval
        self.angle = 0.0
        self.get_logger().info("Joint control node has been started")

    def publish_joint_states(self):
        # Increment angle
        self.angle += 0.1
        if self.angle > 2 * math.pi:
            self.angle -= 2 * math.pi

        # Generate joint positions with a simple incrementing pattern
        joint1_position = 0.71758977
        joint2_position = 0.38226679
        joint3_position = 0.58294707
        joint4_position = 0.60556263
        joint5_position = -1.57079801
        joint6_position = -2.28838609

        # Log joint positions
        self.get_logger().info(f"Joint positions: {joint1_position}, {joint2_position}, {joint3_position}, {joint4_position}, {joint5_position}, {joint6_position}")

        joint_state = JointState()
        joint_state.header = Header()
        joint_state.header.stamp = self.get_clock().now().to_msg()
        joint_state.name = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        joint_state.position = [joint1_position, joint2_position, joint3_position, joint4_position, joint5_position, joint6_position]
        joint_state.velocity = []
        joint_state.effort = []

        # Log joint state message before publishing
        self.get_logger().info(f"Publishing joint state: {joint_state}")

        self.joint_publisher.publish(joint_state)

def main(args=None):
    rclpy.init(args=args)
    node = JointControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()