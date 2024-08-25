#!/usr/bin/python3
"""
This module defines a new class Rectangle which actually inherits
fr0m a previously established Basegeometry
"""

BaseGeometry = __import__('7-base_geometry').BaseGeometry


class Rectangle(BaseGeometry):
    """
    New class that is a child/derived class of BaseGeometry
    Has attributes width and height
    """

    def __init__(self, width, height):
        """class constructor for initializing Rectangle's width and Height
