# Q8. Write a shell script to compare two files and if found equal asks the user to delete the duplicate file.

#!bin/bash
echo "Enter file 1:"
read file1
echo "Enter file 2:"
read file2
if cmp -s "$file1" "$file2"; 
then
    read -p "Duplicate files found. Do you want to delete $file2? (y/n) " choice
    if [ "$choice" = "y" ]; 
    then
        rm "$file2"
        echo "$file2 deleted."
    else
        echo "File deletion cancelled."
    fi
else
    echo "Files are not identical."
fi