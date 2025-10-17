from setuptools import find_packages, setup

package_name = 'my_turtle_action'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dexforint',
    maintainer_email='dexforint@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'server = my_turtle_action.server:main',
            'client = my_turtle_action.client:main',
            'number_publisher = my_turtle_action.publisher_node:main',
        ],
    },
)
