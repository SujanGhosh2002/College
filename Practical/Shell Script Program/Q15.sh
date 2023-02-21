# Q15. Write a shell script to find the permutation P(n,x).

#!/bin/bash
echo "Enter value of n: "
read n
echo "Enter value of x:"
read x
if (( x > n )); 
then
  echo "Invalid input (x!=x>n)."
else
  fact1=1
  for (( i=1;i<=n;i++ ))
  do
    fact1=$(( fact1*i ))
  done
  # echo "n! = $fact1"
  fact2=1
  r=$(( n-x ))
  for (( i=1;i<=r;i++ ))
  do
    fact2=$(( fact2*i ))
  done
  # echo "(n-x)! = $fact2"
  echo "P($n,$x) = n!/(n-x)! = $(( fact1/fact2 ))"
fi
