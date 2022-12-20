#!/usr/bin/python3
"""class square that defines a square"""

class Square:
    """Defines a square"""

    def__init__(self, size=0):
        """Initalises square
        Args:
            size (int): size of the square
        """

        if type(size) is not int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size #:size of square
