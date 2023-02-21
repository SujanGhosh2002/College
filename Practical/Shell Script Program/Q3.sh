# Q3. Write a shell script to modify ―cal command to display calendars of the specified range of months.

#!bin/bash
echo "Enter the starting month number: "
read stmonth
echo "Enter the last month number: "
read lsmonth

echo "Enter the year: "
read year

while [ $stmonth -le $lsmonth ]
do
	cal $stmonth $year
	stmonth=$(( stmonth + 1 ))
done