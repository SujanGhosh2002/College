// Q11. WAP to calculate factorial and to compute the factors of a given no. (i)using recursion, (ii) using iteration
#include<stdio.h>
void main()
{
    int i, num, fact=1;
	printf("Enter any number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
    	fact=fact*i;
	}
	printf("%d! = %d",num,fact);
}