import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/dexforint/ROS2_study/turtlesim_action/install/my_turtle_action'
