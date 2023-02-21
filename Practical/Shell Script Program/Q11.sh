# Q11. Write a shell script to find the LCD(least common divisor) of two numbers.

#!/bin/bash
echo "Enter first number: "
read num1
echo "Enter second number: "
read num2
if [ $num1 -lt $num2 ]; 
then
    min=$num1
else
    min=$num2
fi

for ((i=min; i>=1; i--)); 
do
    if [ $((num1%i)) -eq 0 ] && [ $((num2%i)) -eq 0 ]; 
    then
        break
    fi    
done
echo "The GCD of $num1 and $num2 is $i"
echo "The LCD of $num1 and $num2 is $(( num1*num2 /i ))"