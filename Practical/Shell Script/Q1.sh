# Q1. Write a shell script to check if the number entered at the command line is prime or not.
#!/bin/bash

echo "Enter a number: "
read num
if [ $num -eq 0 ] || [ $num -eq 1 ];
then
    echo "$num are neither a prime numbers nor a composite numbers."
else
    for ((i=2; i<=num/2; i++))
    do
        if [ $((num%i)) -eq 0 ]
        then
            echo "$num is not a prime number."
            exit
        fi
    done
    echo "$num is a prime number."
fi



# if [ $1 -eq 0 ] || [ $1 -eq 1 ];
# then
#     echo "$1 are neither a prime numbers nor a composite numbers."
# else
#     for ((i=2; i<=$1/2; i++))
#     do
#     rem=`expr $1 \% $i `
#         if [ $div -eq 0 ]
#         then
#             echo "$1 is not a prime number."
#             exit
#         fi
#     done
#     echo "$1 is a prime number."
# fi