# Q14. Write a shell script to find the binomial coefficient C(n , x).

#!bin/bash
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
    for (( i=1;i<=x;i++ ))
    do
        fact2=$(( fact2*i ))
    done
    # echo "x! = $fact2"
    r=$(( n-x ))
    fact3=1
    for (( i=1;i<=r;i++ ))
    do
        fact3=$(( fact3*i ))
    done
    # echo "(n-x)! = $fact3"
    # echo "x!(n-x)! = $(( fact2*fact3 ))"
    echo "P($n,$x) = n!/x!(n-x)! = $(( fact1/$(( fact2*fact3 )) ))"
fi
