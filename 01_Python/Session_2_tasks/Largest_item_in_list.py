#!/usr/bin/python3

# allow user to enter list of numbers
lst = input("enter the numbers: ").split()

# convering lst from list of strings to list of integer values
lst = [int(num) for num in lst]

# printing maximum value in the list
print(max(lst))