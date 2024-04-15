from setuptools import find_packages
from setuptools import setup

setup(
    name='cpp_sensor_server',
    version='0.0.0',
    packages=find_packages(
        include=('cpp_sensor_server', 'cpp_sensor_server.*')),
)
