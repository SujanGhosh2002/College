# Q9. Write a shell script to find the sum of digits of a given number.

#!bin/bash
sum=0
echo "Enter number: "
read num
while [ $num -gt 0 ]
do
    rem=$((num%10))
    sum=$((sum+rem))
    num=$((num/10))
done
echo "Sum of digits: $sum"