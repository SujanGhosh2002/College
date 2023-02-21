// Q6. Perform Stack operations using Linked List implementation.
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push();
void pop();
void peek();
void show();
void main()
{
	int choice;
	printf("1. PUSH\n");
	printf("2. PUP\n");
	printf("3. PEEK\n");
	printf("4. SHOW\n");
	printf("5. EXIT\n");
	while(choice!=5)
	{
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
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
		}
	}
}
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Push element in stack: ");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
void pop()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Popped element: %d",top->data);
		temp=top;
		top=top->next;
		free(temp);
	}
}
void peek()
{
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Peeked element: %d",top->data);
	}
}
void show()
{
	struct node *temp;
	if(top==NULL)
	printf("Stack is empty");
	else
	{
		temp=top;
		printf("Stack elements: ");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
