from setuptools import find_packages
from setuptools import setup

setup(
    name='tennis_court',
    version='0.0.0',
    packages=find_packages(
        include=('tennis_court', 'tennis_court.*')),
)
