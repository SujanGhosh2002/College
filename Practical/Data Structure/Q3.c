// Q3. Implement Linked List using templates. Include functions for insertion, deletion and search of a number, reverse the list and concatenate two linked lists (include a function and also overload operator +).
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL, *temp;
void create();
void travers();
void count_node();
void reverse();
void insert_first();
void insert_last();
void insert_middle();
void delete_first();
void delete_last();
void delete_middle();
void search();
void sort();
void update();
void merg();
void main()
{
	int choice;
	printf("1. CREATE\n");
	printf("2. TRAVERS\n");
	printf("3. COUNT NODE\n");
	printf("4. REVERSE\n");
	printf("5. INSERT FIRST\n");
	printf("6. INSERT MIDDLE\n");
	printf("7. INSERT LAST\n");
	printf("8. DELETE FIRST\n");
	printf("9. DELETE MIDDLE\n");
	printf("10. DELETE LAST\n");
	printf("11. SEARCH\n");
	printf("12. SORT\n");
	printf("13. UPDATE\n");
	printf("14. MERG\n");
	printf("15. EXIT\n");
	while(choice!=15)
	{	
		printf("\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create(); 
					break;
			case 2:travers();
					break;
			case 3:count_node();
					break;
			case 4:reverse();
					break;
			case 5:insert_first();
					break;
			case 6:insert_middle();
					break;
			case 7:insert_last();
					break;
			case 8:delete_first();
					break;
			case 9:delete_middle();
					break;
			case 10:delete_last();
					break;
			case 11:search();
					break;
			case 12:sort();
					break;
			case 13:update();
					break;
			case 14:merg();
					break;		
			case 15:exit(0);
					break;
			default:printf("\nInvalide Option");
		}
	}	
}
void create()
{
	int ch;
	do
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue? then press 1 : ");
		scanf("%d",&ch);
	}
	while(ch==1);	
}
void travers()
{
	if(head==NULL)
	{
		printf("Single link list is empty");
	}
	else
	{
		temp=head;
		printf("Link list element: ");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void count_node()
{
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	printf("The number of nodes is %d ",count);
}
void reverse()
{
	struct node *temp, *prev;
	temp=0;
	prev=0;
	while(head!=NULL)
	{
		temp=head->next;
		head->next=prev;
		prev=head;
		head=temp;	
	}
	head=prev;
}
void insert_first()
{
//	if()
//	{
//		printf("Single link list is full");
//	}
//	else
//	{
		temp=head;
		struct node *firstinsert=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter link list first insert value: ");
		scanf("%d",&firstinsert->data);
		firstinsert->next=head;
		head=firstinsert;
//	}
}
void insert_middle()
{
	int position,i;
//	if(head==NULL)
//	{
//		printf("Single link list is full");
//	}
//	else
//	{
		printf("\nEnter link list insert position: ");
		scanf("%d",&position);
		temp=head;
		i=1;
		while(i<position-1)
		{
			temp=temp->next;
			i++;
		}
		struct node *positioninsert=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter link list insert value: ");
		scanf("%d",&positioninsert->data);
		positioninsert->next=temp->next;
		temp->next=positioninsert;
//	}
}
void insert_last()
{
//	if(head==NULL)
//	{
//		printf("Single link list is full");
//	}
//	else
//	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		struct node *lastinsert=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter link list last insert value: ");
		scanf("%d",&lastinsert->data);
		temp->next=lastinsert;
		lastinsert->next=NULL;
//	}
}
void delete_first()
{
	if(head==NULL)
	{
		printf("Single link list is empty");
	}
	else
	{
		printf("\nLink list first deleted value is :%d \n",head->data);
		temp=head;
		head=head->next;
		free(temp);
	}
}
void delete_middle()
{
	if(head==NULL)
	{
		printf("circular link list is empty");
	}
	else
	{
		struct node *nextnode;
		int position,i;
		printf("\nEnter link list position insert value: ");
		scanf("%d",&position);
		temp=head;
		i=1;
		while(i<position-1)
		{
			temp=temp->next;
			i++;
		}
		printf("Link list position deleted value is :%d \n",temp->next->data);
		nextnode=temp->next;
		temp->next=nextnode->next;
	}
}
void delete_last()
{
	if(head==NULL)
	{
		printf("circular link list is empty");
	}
	else
	{
		struct node *prev;
		temp=head;
		prev=head;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		printf("\nLink list last deleted value is :%d \n",temp->data);
		prev->next=NULL;
	}
}
void search()
{
	int item;
	printf("\nEnter link list search item: ");
	scanf("%d",&item);
	temp=head;
	do
	{
		if(temp->data==item)
		{
			printf("%d item is found location is %d",item, temp);
			break;
		}
		else
		{
			temp=temp->next;
		}
	}
	while(temp!=NULL);
	if (temp==NULL)
	{
		printf("%d item not found",item);
	}
}
void sort()
{
		
}
void update()
{
	int position,count=1;
	printf("\nEnter link list updete position: ");
	scanf("%d",&position);
	temp=head;
	while(temp!=NULL)
	{
		if(count==position)
		{
			printf("Enter link list updete element: ");
			scanf("%d",&temp->data);
		}
		count++;
		temp=temp->next;
	}
//	temp=head;
//	printf("Updeting link list elements: ");
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
}
void merg()
{
	int ch, i, count=0;
	struct node *start1, *start2, *head, *newnode, *temp;
	head=start1=start2=NULL;
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter first link list data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start1==NULL)
		{
			start1=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue? then press 1 : ");
		scanf("%d",&ch);
	}
	while(ch==1);
	temp=start1;
	printf("First link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter second link list data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start2==NULL)
		{
			start2=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue? then press 1 : ");
		scanf("%d",&ch);
	}
	while(ch==1);
	temp=start2;
	printf("Second link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	temp=start1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=start2;
	head=start1;
//	temp=head;
//	printf("\nMerging link list elements: ");
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
}