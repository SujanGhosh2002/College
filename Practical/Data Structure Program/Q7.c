// Q7. Perform Stack operations using Array implementation. Use Templates.
#include<stdio.h>
#include<stdlib.h>
int stack[5],top=-1,item;
void push();
void pop();
void peek();
void show();
void main()
{ 
	int ch;
	printf("1. PUSH\n");
	printf("2. PUP\n");
	printf("3. PEEK\n");
	printf("4. SHOW\n");
	printf("5. EXIT\n");
	while(1)
	{
		printf("\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
					break;
			case 2:pop();
					break;
			case 3:peek();
					break;
			case 4:show();
					break;
			case 5:exit(0);
					break;
			default:printf("Invalide Option");
		}
	}
}
void push()
{	
	if(top==5-1)
	{
		printf("Stack is full");
	}
	else
	{
		printf("Push element in stack: ");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Popped element: %d",stack[top]);
		top=top-1;
	}
}          
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Peeked element: %d",stack[top]);
	}
}                        
void show()
{
	if(top>=0)
	{
		printf("Stack elements: ");
		for(int i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
	else
	{
		printf("Stack is empty");
	}
}
