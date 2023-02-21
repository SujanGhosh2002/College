// Q13. WAP to calculate GCD of 2 number (i) with recursion (ii) without recursion
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int num1, num2, min, i;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	if (num1 < num2)
	{	
		min = num1;
	}
	else
	{
		min = num2;
	}
	for (i = min; 1 <= i; i--)
	{
		if (((num1 % i) == 0) && ((num2 % i) == 0))
		{
			printf("The LCD of %d and %d is %d", num1, num2, i);
			exit(0);
		}
	}
}