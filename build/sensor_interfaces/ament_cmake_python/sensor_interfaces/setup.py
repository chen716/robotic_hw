from setuptools import find_packages
from setuptools import setup

setup(
    name='sensor_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('sensor_interfaces', 'sensor_interfaces.*')),
)
