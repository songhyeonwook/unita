#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rospy
from pyproj import Proj
from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import NavSatFix


class GPS_to_UTM:
    def __init__(self):
        rospy.init_node('GPS_to_UTM', anonymous=True)
        self.gps_sub = rospy.Subscriber("/ublox_gps/fix", NavSatFix, self.gps_callback)
        self.proj_UTM = Proj(proj='utm', zone=52, ellps='WGS84', preserve_units=False)

        self.utm_msg = Float32MultiArray()
        self.is_gps_data = False

        rate = rospy.Rate(10)
        while not rospy.is_shutdown():
            if not self.is_gps_data:
                rospy.loginfo("[1] Can't subscribe to '/ublox_gps/fix' topic... \nPlease check your GPS sensor connection")

            self.is_gps_data = False
            rate.sleep()

    def gps_callback(self, gps_msg):
        self.is_gps_data = True
        latitude = gps_msg.latitude
        longitude = gps_msg.longitude
        altitude = gps_msg.altitude
        utm_xy = self.proj_UTM(longitude, latitude)
        utm_x = utm_xy[0]
        utm_y = utm_xy[1]

        rospy.loginfo(''' 
        ----------------[ GPS data ]----------------
            latitude    : {latitude}
            longitude   : {longitude}
            altitude    : {altitude}

                             |
                             | apply Projection (utm 52 zone)
                             V

        ------------------[ utm ]-------------------
              utm_x     : {utm_x}
              utm_y     : {utm_y}
        '''.format(latitude=latitude, longitude=longitude, altitude=altitude, utm_x=utm_x, utm_y=utm_y))


if __name__ == '__main__':
    try:
        GPS_to_UTM = GPS_to_UTM()
    except rospy.ROSInterruptException:
        pass

