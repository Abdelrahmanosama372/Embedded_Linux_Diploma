#!/usr/bin/python3
import os

def generate_GPIO_init_function_AVR(filename,portname):
    port_val = []
    for i in range(8):
        mode = input(f"please enter bit {i} mode: ")
        if mode == 'out':
            port_val.append('1')
        else:
            port_val.append('0')

    port_val.reverse()
    # write in file
    with open(filename,'w') as f:
        f.writelines([f"void Init_{portname}_DIR (void)\n", 
                      "{\n",                                
                      f"    DDR{portname[4]} = 0b{''.join(port_val)};\n",             
                      "}"])



if __name__ == '__main__':
    file_name = input("enter file name as(filename.c): ")
    port_name = input("enter Port name as(PORTX): ")
    generate_GPIO_init_function_AVR(file_name,port_name)