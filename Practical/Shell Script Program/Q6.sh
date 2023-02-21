# Q6. Write a shell script to display on the screen sorted output of ―who command along with  the total number of users.

who | sort
echo "Number of user: "
who | wc -l











# #!/bin/bash
# display=$(who)
# sorted_output=$(echo "$display" | sort)
# total_users=$(echo "$sorted_display" | wc -l)
# echo "Sorted users display of who command:"
# echo "$sorted_display"
# echo "Total number of users: $total_users"