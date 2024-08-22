#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState

class JointSubscriber(Node):

    def __init__(self):
        super().__init__('joint_subscriber')
        self.subscription = self.create_subscription(
            JointState,
            '/joint_states',  # Topic to subscribe to
            self.listener_callback,
            10)
        self.subscription  # Prevent unused variable warning

    def listener_callback(self, msg):

            joint_1_angle = msg.position[0]
            joint_2_angle = msg.position[1]
            joint_3_angle = msg.position[2]
            joint_4_angle = msg.position[3]
            joint_5_angle = msg.position[4]
            joint_6_angle = msg.position[5]

            self.get_logger().info('Joint angles:')
            self.get_logger().info(f'Joint 1: {joint_1_angle:.4f} radians')
            self.get_logger().info(f'Joint 2: {joint_2_angle:.4f} radians')
            self.get_logger().info(f'Joint 3: {joint_3_angle:.4f} radians')
            self.get_logger().info(f'Joint 4: {joint_4_angle:.4f} radians')
            self.get_logger().info(f'Joint 5: {joint_5_angle:.4f} radians')
            self.get_logger().info(f'Joint 6: {joint_6_angle:.4f} radians')

def main(args=None):
    rclpy.init(args=args)
    joint_subscriber = JointSubscriber()
    rclpy.spin(joint_subscriber)

    # Destroy the node explicitly (optional)
    joint_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
