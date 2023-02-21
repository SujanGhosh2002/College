# Q17. Write a shell script to find the factorial of a given number.

#!bin/bash
fact=1
echo "Enter any number: "
read num
for (( i=1;i<=num;i++ ))
do
    fact=$(( fact*i ))
done
echo "$num! = $fact"