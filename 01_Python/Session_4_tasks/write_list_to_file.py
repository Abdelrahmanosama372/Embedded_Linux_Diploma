#!/usr/bin/python3
import os

def is_file_exists(filename):
    if os.path.exists(filename):
         return True
    return False

def append_in_a_file(filename,data):
    with open(filename,'a') as f:
        f.write('\n')
        f.writelines(' '.join(data))
        f.close()


if __name__ == '__main__':
    file_name = input("enter the file name: ")
    # check file existance
    success = is_file_exists(file_name)
    if success:
        data = input("enter data to append in the file: ")
        append_in_a_file(file_name,data.split())
        print("data has been written to the file")
    else:
        print("file doesn't exist")