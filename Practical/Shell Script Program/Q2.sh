# Q2. Write a shell script to modify ―cal command to display calendars of the specified months.

#!/bin/bash
echo "Enter month no:"
read month
echo "Enter year :"
read year
cal $month $year