import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/dexforint/ROS2_study/ros2_ws2/install/my_turtle_controller'
