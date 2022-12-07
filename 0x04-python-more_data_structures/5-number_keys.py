#!/usr/bin/python3
def number_keys(a_dictionary):
    number = 0
    list_number_keys = list(a_dictionary.keys())
    for i in list_number_keys:
        number += 1
    return (number)
