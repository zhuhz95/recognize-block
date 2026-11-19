from setuptools import find_packages
from setuptools import setup

setup(
    name='zhz_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('zhz_interfaces', 'zhz_interfaces.*')),
)
