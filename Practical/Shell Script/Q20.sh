# Q20. Write a shell script to find the GCD(greatest common divisor) of two numbers.

#!/bin/bash
echo "Enter first number: "
read num1
echo "Enter second number: "
read num2
if [ $num1 -lt $num2 ]; then
    min=$num1
else
    min=$num2
fi

for ((i=min; i>=1; i--)); 
do
    if [ $((num1%i)) -eq 0 ] && [ $((num2%i)) -eq 0 ]; 
    then
        echo "The LCD of $num1 and $num2 is $i"
        break
    fi
done

