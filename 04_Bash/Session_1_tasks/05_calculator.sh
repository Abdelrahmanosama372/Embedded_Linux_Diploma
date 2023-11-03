#!/bin/bash

echo "choose an operation:"
echo "--------------------"
echo "1- Add"
echo "2- Subtract"
echo "3- Multiply"
echo "4- Divide"
echo "5- Power"
echo "6- Exit"
echo "--------------------"

read -p  "enter choice: " choice

if [[ $choice -lt 1 || $choice -gt 5 ]]
then
exit 0
fi

read -p "enter number1: " num1
read -p "enter number2: " num2

if [ $choice -eq 1 ]
then
echo "result is " $((num1 + num2))

elif [ $choice -eq 2 ]
then
echo "result is " $((num1 - num2))

elif [ $choice -eq 3 ]
then
echo "result is " $((num1 * num2))

elif [ $choice -eq 4 ]
then
res=$(awk "BEGIN { printf(\"%.3f\", $num1 / $num2) }")
echo "result is  $res"

elif [ $choice -eq 5 ]
then
echo "result is $((num1 ** num2))"
fi