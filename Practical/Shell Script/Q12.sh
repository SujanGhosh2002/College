# Q12. Write a shell script to perform the tasks of basic calculator.

#!/bin/bash
echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Remander"
read choice
echo "Enter fast number: "
read num1
echo "Enter second number: "
read num2
case $choice in
    1) echo "Addition: $num1 + $num2 = $((num1 + num2))";;
    2) echo "Subtraction: $num1 - $num2 = $((num1 - num2))";;
    3) echo "Multiplication: $num1 * $num2 = $((num1 * num2))";;
    4) echo "Division: $num1 / $num2 = $((num1 / num2))";;
    5) echo "Remander: $num1 % $num2 = $((num1 % num2))";;
    *) echo Invalid option;;
esac