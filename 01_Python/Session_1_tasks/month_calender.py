#!/usr/bin/python3

import calendar

# handling the exception of entering wrong data
try:
    # allow user to enter the year and the month
    year = int(input("enter the year: "))
    month = int(input("enter the month: "))

    # get the month calendar and print it
    mon_cal = calendar.month(year,month)
    print(mon_cal)

except:
    print("invalid inputs")



