#!/bin/bash
read n
dig=0
sum=0
temp1=$n
temp2=$n
while [ $temp1 -gt 0 ]
do
    dig=$(($dig+1))
    temp1=$((temp1/10))
done
while [ $temp2 -gt 0 ]
do
    rem=$((temp2%10))
    pow=$((rem**dig))
    sum=$((sum+pow))
    temp2=$((temp2/10))
done
if [ $sum -eq $n ]
then
    echo "amstrong"
else
    echo "not amstrong"
fi


































# # echo "Enter a number: "
# # read num
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