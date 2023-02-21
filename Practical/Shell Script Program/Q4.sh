# Q4. Write a shell script to accept a login name. If not a valid login name display message – ―Entered login name is invalid.

#!/bin/bash
echo "Enter login name: "
read log_nam
if id -u "$log_nam"  > /dev/null 2>&1;
then
  echo "Entered login name $log_nam is valid."
else
  echo "Entered login name $log_nam is invalid."
fi
