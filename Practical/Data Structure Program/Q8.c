// Q8. Perform Queues operations using Circular Array implementation. Use Templates.
#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],rear=-1,front=-1;
void enque();
void deque();
void peek();
void display();
void main()
{
	int choice;
	printf("1. REAR\n");
	printf("2. FRONT\n");
	printf("3. PEEK\n");
	printf("4. DISPLAY\n");
	printf("5. EXIT\n"); 
 	while(1) 
 	{ 
 		printf("\nEnter choice: "); 
 		scanf("%d",&choice); 
 		switch(choice) 
 		{ 
 			case 1:enque(); 
 				break; 
 			case 2:deque(); 
 				break; 
 			case 3:peek();
 				break;
 			case 4:display(); 
 				break; 
 			case 5:exit(0); 
 				break; 
 			default: 
 			printf("Invalide option"); 
 		} 
 	}
}
void enque()
{
	int item;  
	if(front==(rear+1)%size)
	{
		printf("Circular queue is full");
	}
	else 
	{
		if(front==-1&&rear==-1)
		{
			rear++;
			front++;
			printf("Enter rear element in circular queue: ");
			scanf("%d",&item);
			queue[rear]=item;
		}
		else
		{
			rear=(rear+1)%size;
			printf("Enter rear element in circular queue: ");
			scanf("%d",&item);
			queue[rear]=item;
		}
	}
}
void deque()
{
	if(front==-1&&rear==-1)
	{
		printf("Circular queue is empty ");	
	}
	else
 	{
 		printf("Deleted element: %d",queue[front]);
 		if(front==rear)
 		{
 			front=rear=-1;
		}
		else
		{
			front=(front+1)%size;
		}
 	}
}
void peek()
{
	if(rear==-1&&front==-1)
	{
		printf("Circular queue is empty");
	}
	else
	{
		printf("Front element: %d",queue[front]);
	} 
}   
void display()
{
	int i;
	if(rear==-1&&front==-1)
	{
		printf("Circular queue is empty");
	}
	else
	{
		i=front;
		printf("Circular queue elements: ");
		while(i!=rear)
		{
			printf("%d\t",queue[i]);
			i=(i+1)%size;
		}
		printf("%d",queue[i]);
	}
}