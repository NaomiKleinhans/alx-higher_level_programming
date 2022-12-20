#!/usr/bin/python3
class Square:
    """Defines a square"""
    def__init__(self, size=0):
        """Initalises the data"""
        self.__size = size
        if type(size) != int:
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
