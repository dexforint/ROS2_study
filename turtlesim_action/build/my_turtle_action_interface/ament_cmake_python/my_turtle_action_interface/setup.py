from setuptools import find_packages
from setuptools import setup

setup(
    name='my_turtle_action_interface',
    version='0.0.0',
    packages=find_packages(
        include=('my_turtle_action_interface', 'my_turtle_action_interface.*')),
)
