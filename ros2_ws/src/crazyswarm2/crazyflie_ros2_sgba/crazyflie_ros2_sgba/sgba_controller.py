#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rclpy.time import Time
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry

from math import cos, sin, degrees, radians, pi
import sys
import tf_transformations
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped

# Change this path to your crazyflie-firmware folder
sys.path.append('/home/Project/crazyflie-firmware')
import cffirmware

class sgbaDriver:

    def init(self, webots_node, properties):
        self.robot = webots_node.robot
        timestep = int(self.robot.getBasicTimeStep())
 ## Initialize motors
        self.m1_motor = self.robot.getDevice("m1_motor")
        self.m1_motor.setPosition(float('inf'))
        self.m1_motor.setVelocity(-1)
        self.m2_motor = self.robot.getDevice("m2_motor")
        self.m2_motor.setPosition(float('inf'))
        self.m2_motor.setVelocity(1)
        self.m3_motor = self.robot.getDevice("m3_motor")
        self.m3_motor.setPosition(float('inf'))
        self.m3_motor.setVelocity(-1)
        self.m4_motor = self.robot.getDevice("m4_motor")
        self.m4_motor.setPosition(float('inf'))
        self.m4_motor.setVelocity(1)

        self.target_twist = Twist()

        ## Initialize Sensors
        self.imu = self.robot.getDevice("inertial unit")
        self.imu.enable(timestep)
        self.gps = self.robot.getDevice("gps")
        self.gps.enable(timestep)
        self.gyro = self.robot.getDevice("gyro")
        self.gyro.enable(timestep)
        self.range_front = self.robot.getDevice("range_front")
        self.range_front.enable(timestep)
        self.range_left = self.robot.getDevice("range_left")
        self.range_left.enable(timestep)
        self.range_back = self.robot.getDevice("range_back")
        self.range_back.enable(timestep)
        self.range_right = self.robot.getDevice("range_right")
        self.range_right.enable(timestep)

        #self.lidar = self.robot.getDevice("lidar")
        #self.lidar.enable(timestep)

        ## Intialize Variables
        self.past_x_global = 0
        self.past_y_global = 0
        self.past_z_global = 0
        self.past_time = self.robot.getTime()

        self.first_pos = True
        self.first_x_global = 0.0
        self.first_y_global = 0.0


        cffirmware.controllerPidInit()

        rclpy.init(args=None)
        self.node = rclpy.create_node('sgba_controller')
        self.laser_publisher = self.node.create_publisher(LaserScan, 'scan', 10)
        self.odom_publisher = self.node.create_publisher(Odometry, 'odom', 10)

        self.tfbr = TransformBroadcaster(self.node)

        self.msg_laser = LaserScan()
        self.node.create_timer(1.0/30.0, self.publish_laserscan_data)

    def publish_laserscan_data(self):

            front_range = float(self.range_front.getValue()/1000.0)

            back_range = float(self.range_back.getValue()/1000.0)
            left_range = float(self.range_left.getValue()/1000.0)
            right_range = float(self.range_right.getValue()/1000.0)
            max_range = 3.49
            if front_range > max_range:
                front_range = 0.0
            if left_range > max_range:
                left_range = 0.0
            if right_range > max_range:
                right_range = 0.0
            if back_range > max_range:
                back_range = 0.0

            self.msg_laser = LaserScan()
            self.msg_laser.header.stamp = Time(seconds=self.robot.getTime()).to_msg()
            self.msg_laser.header.frame_id = 'base_link'
            self.msg_laser.range_min = 0.1
            self.msg_laser.range_max = max_range
            #print('print',back_range, left_range, front_range, right_range, back_range)
            self.msg_laser.ranges = [back_range, left_range, front_range, right_range, back_range]
            #self.msg_laser.ranges = [max_range, max_range, max_range, max_range, max_range]

            self.msg_laser.angle_min = 0.5 * 2*pi
            self.msg_laser.angle_max =  -0.5 * 2*pi
            self.msg_laser.angle_increment = -1.0*pi/2
            self.laser_publisher.publish(self.msg_laser)
            
    def step(self):
        #rclpy.spin_once(self.node, timeout_sec=0)
        self.node.get_logger().error('pee')


# def main(args=None):
#     rclpy.init(args=args)
#     sd = sgbaDriver()
#     rclpy.spin(sd)

#     rclpy.shutdown()
#     pass

# if __name__ == '__main__':
#     main()