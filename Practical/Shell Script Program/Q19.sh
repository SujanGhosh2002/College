# Q19.  Write a shell script to check whether the file have all the permissions or not.

echo "Enter file name : "
read name

if [ -f $name ]
then
	if [ -w $name -a -r $name -a -x $name ]
	then
		echo "$name file  have all permission "
	else
		echo "$name file have not all permission "
	fi
else
	echo "$name file not exits enter a valid file "
fi