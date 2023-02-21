# Q5. Write a shell script to display date in the mm/dd/yy format.

#!bin/bash
date=$(date '+%m/%d/20%y')
echo "Date: $date"