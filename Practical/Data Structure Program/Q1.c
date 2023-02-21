// Q1. Write a program to search an element from a list. Give user the option to perform Linear or Binary search. Use Template functions.
#include<stdio.h>
#include<stdlib.h>
int ch,size,array[100],i,position,item,low,high,mid;
void input();
void linear_search();
void binary_search();
void main()
{
	printf("1. LINEAR SEARCH\n");
	printf("2. BINARY SEARCH\n");
	printf("3. EXIT\n");
	while(1)
	{	
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:input(); linear_search();
					break;
			case 2:input(); binary_search();
					break;		
			case 3:exit(0);
					break;
			default:printf("\nInvalide Option");
		}
	}	
}
void input()
{
	printf("\nArray size: ");
	scanf("%d",&size);
	printf("Array Element: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Search item: ");
	scanf("%d",&item);
}
void linear_search()
{
	for(i=0;i<size;i++)
	{
		if(array[i]==item)
		{
			printf("Item found location: %d",i+1);
			return;
		}
	}
	if(array[i]!=item)
	{
		printf("Item not found");
	}
}
void binary_search()
{
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (array[mid]==item) 
		{
			printf("Item found location: %d",mid+1);
			break;
		}
		else if (array[mid]>item) 
		{ 
			high=mid-1;				
		}
		else
		{
			low=mid+1;
		}
	}	
	if(array[mid]!=item)
	{
		printf("Item not found");
	}
}