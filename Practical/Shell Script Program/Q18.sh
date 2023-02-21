# Q18. Write a shell script to check whether the number is Armstrong or not.

#!bin/bash
echo "Enter number: "
read num
sum=0
dig=0
temp1=$num
temp2=$num
while [ $temp1 -gt 0 ]
do
    dig=$((dig+1));
    temp1=$(( temp1 / 10 ));
done
while [ $temp2 -gt 0 ]
do
    rem=$(( temp2 % 10 ))
    pow=$(( rem ** dig ))
    sum=$(( sum + $pow ))
    temp2=$(( temp2 / 10 ))
done
if [ $num == $sum ];
then
    echo "$num is a armstrong number."
else
    echo "$num is not armstrong number."
fi



# echo "Enter number: "
# read num
# sum=0
# dig=0
# temp1=$num
# temp2=$num
# while (( $temp1 > 0 ))
# do
#     dig=(($dig+1))
#     temp1 = $(( temp1 / 10 ))
# done
# while (( $temp2 > 0 ))
# do
#     rem = $(( temp2 % 10 ))
#     sum = $(( sum + $(( rem ** dig )) ))
#     temp2 = $(( temp2 / 10 ))
# done
# if [ $num == $sum ];
# then
#     echo "$num is a armstrong number."
# else
#     echo "$num is not armstrong number."
# fi