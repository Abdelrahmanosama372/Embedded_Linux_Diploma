#!/usr/bin/python3

# login system usernames with their corresponding passwords
login_sys = {"Ahmed":"1234", "Ali":"9876", "Amr":"5678"}

# allow user to enter his username and password
user_name = input("enter your username: ")
password = input("enter your password: ")

# check on the excitance of the username and password on the login system
if user_name in login_sys.keys():
    if login_sys[user_name] == password:
        print("welcome")
    else:
        print("incorrect entry")
else:
    print("incorrect entry")