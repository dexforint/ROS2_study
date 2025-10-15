import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/dexforint/ROS2_study/ros2_service/install/my_service_server'
