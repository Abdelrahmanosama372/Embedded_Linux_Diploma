#!/usr/bin/python3
import os

def count_lines_in_file(filename):
	# check if file exsits
    if os.path.exists(filename):
    	# open file for reading
        with open(filename,'r') as f:
            lines = f.readlines();
            f.close()
            return len(lines)
    # return fale in case file doesn't exsits
    return False

if __name__ == '__main__':
    file_name = input("enter file name as(filename.txt): ")
    lines = count_lines_in_file(file_name)
    if lines: 
        print("number of lines in this file: ",lines)
    else: # lines = false
        print("file doesn't exist")