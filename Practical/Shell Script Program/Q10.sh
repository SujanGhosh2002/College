# Q10. Write a shell script to merge the contents of three files, sort the contents and then display them page by page.

#!/bin/bash
echo "Enter file 1:"
read file1
echo "Enter file 2:"
read file2
echo "Enter file 3:"
read file3

cat $file1 $file2 $file3 | sort 
echo $cat 