#!/usr/bin/env python3

import asyncio
import moteus
import time
import math

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState

class JointSubscriber(Node):

    def __init__(self):
        super().__init__('joint_subscriber')
        self.subscription = self.create_subscription(
            JointState,
            '/joint_states',  # Topic to subscribe to
            self.listener_callback,10)
        self.subscription  # Prevent unused variable warning

    def radians_to_rotations(radians):
        return radians / (2 * math.pi)

    def listener_callback(self, msg):

        
        # Get Joint Angles
        joint_1_angle = msg.position[0]
        #joint_2_angle = msg.position[1]
        #joint_3_angle = msg.position[2]
        #joint_4_angle = msg.position[3]
        #joint_5_angle = msg.position[4]
        #joint_6_angle = msg.position[5]

        # Joint Angle to Rotations

        position1 = radians_to_rotations(joint_1_angle)
        #position2 = radians_to_rotations(joint_2_angle)
        #position3 = radians_to_rotations(joint_3_angle)
        #position4 = radians_to_rotations(joint_4_angle)
        #position5 = radians_to_rotations(joint_5_angle)
        #position6 = radians_to_rotations(joint_6_angle)


        results1 = await c1.set_position(
            position=position1,
            velocity=0.0,
            accel_limit=8.0,
            velocity_limit=3.0,
            query=True,
        )
        
        #results2 = await c2.set_position(
        #    position=position2,
        #    velocity=0.0,
        #    accel_limit=8.0,
        #    velocity_limit=3.0,
        #    query=True,
        #)

        await asyncio.sleep(0.02)




def main(args=None):
    rclpy.init(args=args)
    joint_subscriber = JointSubscriber()
    rclpy.spin(joint_subscriber)

    # Moteus Setup
    qr = moteus.QueryResolution()
    qr._extra = {
    moteus.Register.CONTROL_POSITION : moteus.F32,
    moteus.Register.CONTROL_VELOCITY : moteus.F32,
    moteus.Register.CONTROL_TORQUE : moteus.F32,
    moteus.Register.POSITION_ERROR : moteus.F32,
    moteus.Register.VELOCITY_ERROR : moteus.F32,
    moteus.Register.TORQUE_ERROR : moteus.F32,
    }

    c1 = moteus.Controller(id=1, query_resolution=qr)
    c2 = moteus.Controller(id=2, query_resolution=qr)

    # Clear any faults for both controllers
    await c1.set_stop()
    await c2.set_stop()


    # Destroy the node explicitly (optional)
    joint_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
