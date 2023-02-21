# Q16. Write a shell script to find the greatest number among the three numbers.

#!bin/bash
echo "Enter first number: "
read num1
echo "Enter second number: "
read num2
echo "Enter therd number: "
read num3
if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then
    echo "$num1 is greatest"
elif [ $num2 -gt $num1 -a $num2 -gt $num3 ]
then
    echo "$num2 is greatest"
else
    echo "$num3 is greatest"
fi