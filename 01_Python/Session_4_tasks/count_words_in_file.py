#!/usr/bin/python3
import os

def count_words_in_file(filename):
    if os.path.exists(filename):
        with open(filename,'r') as f:
            lines = f.read();
            f.close()
            return len(lines.split())
    return False

if __name__ == '__main__':
    file_name = input("enter file name as(filename.txt): ")
    words = count_words_in_file(file_name)
    if words:
        print("number of lines in this file:",words)
    else:
        print("file doesn't exist")