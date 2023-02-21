# Q7.  Write a shell script to display the multiplication table any number.

#!bin/bash
echo "Multiplication Table"
echo "Enter number: "
read num
for((i=1;i<=10;i++))
do
    echo "$num * $i = $((num * i))"
done
