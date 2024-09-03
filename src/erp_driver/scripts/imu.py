#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rospy
from geometry_msgs.msg import Vector3Stamped
import os
from math import pi

class IMUParser:
    def __init__(self):
        rospy.init_node('imu', anonymous=True)
        self.imu_sub = rospy.Subscriber("/imu/rpy", Vector3Stamped, self.callback)
        self.is_imu = False

        rate = rospy.Rate(10)
        while not rospy.is_shutdown():
            os.system('clear')
            if not self.is_imu:
                rospy.loginfo("[1] can't subscribe to '/imu/rpy' topic... \n    please check your IMU sensor connection")

            self.is_imu = False
            rate.sleep()

    def callback(self, data):
        self.is_imu = True
        
        roll = data.vector.x
        pitch = data.vector.y
        yaw = data.vector.z
        
        roll_deg = roll * 180 / pi
        pitch_deg = pitch * 180 / pi
        yaw_deg = yaw * 180 / pi

        rospy.loginfo(f'''
        --------------[ IMU data ]---------------
             Roll  (deg) = {roll_deg}
             Pitch (deg) = {pitch_deg}
             Yaw   (deg) = {yaw_deg}
        -----------------------------------------
        ''')

if __name__ == '__main__' :
    try:
        imu_parser = IMUParser()
    except rospy.ROSInterruptException:
        pass

