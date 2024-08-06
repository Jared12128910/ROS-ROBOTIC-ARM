import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import math
import time

class JointControlNode(Node):
    def __init__(self):
        super().__init__('joint_control_node')
        self.joint_publisher = self.create_publisher(JointState, 'joint_states', 10)
        self.timer = self.create_timer(0.1, self.publish_joint_states)
        self.start_time = time.time()

    def publish_joint_states(self):
        joint_state = JointState()
        current_time = time.time()
        elapsed_time = current_time - self.start_time

        # Generate joint positions with sine wave motion
        joint1_position = 0.5 * math.sin(elapsed_time)
        joint2_position = 0.5 * math.sin(elapsed_time + math.pi / 2)
        joint3_position = 0.5 * math.sin(elapsed_time + math.pi)

        joint_state.header = Header()
        joint_state.header.stamp = self.get_clock().now().to_msg()
        joint_state.name = ['joint1', 'joint2', 'joint3']  # Replace with your joint names
        joint_state.position = [joint1_position, joint2_position, joint3_position]

        self.joint_publisher.publish(joint_state)

def main(args=None):
    rclpy.init(args=args)
    node = JointControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
