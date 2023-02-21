// Q2. WAP using templates to sort a list of elements. Give user the option to perform sorting using Insertion sort, Bubble sort or Selection sort.
#include<stdio.h>
#include<stdlib.h>
int ch,size,array[100],i,j,temp,x;
void input();
void bubble_sort();
void selaction_sort();
void insertion_sort();
void desplay();
void main()
{
	printf("1. BUBBLE SORT\n");
	printf("2. SELACTION SORT\n");
	printf("3. INSERTION SORT\n");
	printf("4. EXIT\n");
	while(1)
	{	      
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:input(); bubble_sort() ;desplay();
					break;
			case 2:input(); selaction_sort() ;desplay();
					break;
			case 3:input(); insertion_sort() ;desplay();
					break;		
			case 4:exit(0);
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
}
void bubble_sort()
{
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void selaction_sort()
{
	for(i=0;i<size;i++)
	{
		x=i;
		for(j=i+1;j<size;j++)
		{
			if(array[j]<array[x])
			{
				x=j;
			}
		}
		temp=array[i];
		array[i]=array[x];
		array[x]=temp;
	}
}
void insertion_sort()
{
	for(i=1;i<size;i++)
	{
		x=array[i];
		for(j=i-1;(j>=0 && array[j]>x);j--)
		{
			array[j+1]=array[j];
		}
		array[j+1]=x;
	}
}
void desplay()
{
	printf("Sorting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}