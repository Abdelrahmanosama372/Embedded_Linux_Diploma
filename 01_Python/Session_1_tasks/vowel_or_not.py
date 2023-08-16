#!/usr/bin/python3

# allow user to enter a character
char = input("enter a character: ")

# check if character is vowel or not
if char in ('a','o','u','i','e','A','O','U',"I",'E'):
    print("vowel")
else:
    print("Consonant")