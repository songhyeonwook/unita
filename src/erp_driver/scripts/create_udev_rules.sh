#!/bin/bash

echo "remap the device serial port(ttyUSBX) to  rplidar"
echo "rplidar usb connection as /dev/rplidar , check it using the command : ls -l /dev|grep ttyUSB"
echo "start copy erp.rules to  /etc/udev/rules.d/"
echo "`rospack find erp_driver`/scripts/erp.rules"
sudo cp `rospack find erp_driver`/scripts/erp.rules  /etc/udev/rules.d
echo " "
echo "Restarting udev"
echo ""
sudo service udev reload
sudo service udev restart
echo "finish "
