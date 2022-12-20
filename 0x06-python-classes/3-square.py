#!/usr/bin/python3

"""Define a lass Square."""

class Square:
    """Represents a square."""

    def __init__(self, size=0):
        """Initialises a new square.

        Args:
            size (int): The size of the new square.
        """
        
        if not isintstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >=0")
        self.__size = size

    def area(self):
        """Returns current square area."""
        return (self.__size * self.__size)
