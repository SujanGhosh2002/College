# Q13. Write a shell script to find the power of a given number.

#!bin/bash
echo "Enter number: "
read num
echo "Enter power: "
read pow
pow_of_num=1
for (( i=1; i <= $pow; i++ ))
do
    pow_of_num=$(( pow_of_num * num))
done
echo "$num ^ $pow = $pow_of_num"