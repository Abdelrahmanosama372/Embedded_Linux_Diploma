#!/bin/bash

if [ -z "$1" ]; then
echo "Usage: ./04_wiki <programming_lang / commands>"
exit 1
fi

if [ $1 = "cpp" ]; then
    echo -e "\e[30m// cpp hello world example\e[0m"
    echo -e "#\e[34minclude\e[0m <\e[31miostream\e[0m>

    \e[36mint\e[0m \e[32mmain\e[0m() {
        \e[30m// Write C++ code here\e[0m
        std::\e[36mcout\e[0m <<\"\e[33mHello world!\e[0m\";

        \e[35mreturn\e[0m 0;
    } "

elif [ $1 = "python" ]; then
    echo -e "\e[30m# python hello world example\e[0m"
    echo -e "\e[34mprint\e[0m(\e[33m\"Hello world!\"\e[0m)"

elif [ $1 = "bash" ]; then
    echo -e "\e[30m# bash hello world example\e[0m"
    echo -e "\e[34mecho\e[0m \e[33m\"Hello world!\"\e[0m"

elif [ $1 = "echo" ]; then
    tldr echo

else
    echo "wiki not exists";
fi