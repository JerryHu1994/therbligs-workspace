#!/bin/sh
# make sure gnome-terminal is installed
# This script is to connect to the real robot and launch the entire back-end for KINOVA MICO robot arm.

# NOTE: This script will be run vai routing method from the Python server.
# To start the python server: python mico_server.py 9999

echo "Launching backend ROS with real robot..." 

########
# For a different robot, change roslaunch to the launch file for the specific robot
########
# launch the ROS launch file for robotiq_85_gripper
gnome-terminal -e "bash -c 'roslaunch robotiq_85_bringup robotiq_85.launch run_test:=false;exec $SHELL'"
sleep 5

# launch the kinova_node to control the MICO arm
gnome-terminal -e "bash -c 'roslaunch kinova_bringup kinova_robot.launch kinova_robotType:=m1n6s300 use_urdf:=true;exec $SHELL'"
sleep 10

# launches the MoveIt node, joint_trajectory, rviz
gnome-terminal -e "bash -c 'roslaunch m1n6s300_moveit_config m1n6s300_demo.launch;exec $SHELL'"
sleep 10

# start the backend mico_master, litern for the connection from the from end
# gnome-terminal -e "bash -c 'python mico_server.py 9999;exec $SHELL'"

# uncomment the following if want to call Get Position from frontend via rosbridge
# launch the rosbridge server
gnome-terminal -e "bash -c 'roslaunch rosbridge_server rosbridge_websocket.launch;exec $SHELL'"

# start the mico position publisher to publish end-effector position string across the ROS-Bridge
gnome-terminal -e "bash -c 'python mico_positionpublisher.py;exec $SHELL'"
