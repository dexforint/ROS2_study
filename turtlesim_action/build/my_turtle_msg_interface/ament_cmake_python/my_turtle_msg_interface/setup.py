from setuptools import find_packages
from setuptools import setup

setup(
    name='my_turtle_msg_interface',
    version='0.0.0',
    packages=find_packages(
        include=('my_turtle_msg_interface', 'my_turtle_msg_interface.*')),
)
