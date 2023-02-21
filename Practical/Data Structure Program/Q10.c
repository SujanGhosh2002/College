// Q10. WAP to scan a polynomial using linked list and add two polynomial.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff, expo;
    struct node *next;
};
struct node *head1 = NULL, *head2 = NULL, *head3 = NULL, *temp, *poly;
void createp1();
void createp2();
void traversep1();
void traversep2();
void polyadd();
void createp3(int, int);
void traversep3();
int main()
{
    int choice, item;
    while (1)
    {
        printf("\n1.create poly1 \n");
        printf("2.create poly2 \n");
        printf("3.traverselist1\n");
        printf("4.traverselist2\n");
        printf("5.polynomial add\n");
        printf("6.treaverse list \n");
        printf("7.exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createp1();
            break;
        case 2:
            createp2();
            break;
        case 3:
            traversep1();
            break;
        case 4:
            traversep2();
            break;
        case 5:
            polyadd();
            break;
        case 6:
            traversep3();
            break;
        case 7:
            exit(0);
        }
    }
}
void createp1()
{
    int ch;
    do
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d%d", &newnode->coeff, &newnode->expo);
        newnode->next = NULL;
        if (head1 == NULL)
        {
            head1 = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue? then press 1 : ");
        scanf("%d", &ch);
    } while (ch == 1);
}
void createp2()
{
    int ch;
    do
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d%d", &newnode->coeff, &newnode->expo);
        newnode->next = NULL;
        if (head2 == NULL)
        {
            head2 = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue? then press 1 : ");
        scanf("%d", &ch);
    } while (ch == 1);
}
void traversep1()
{
    if (head1 == NULL)
    {
        printf("Fast polinomiyal list is empty\n");
    }
    else
    {
        temp = head1;
        printf("Fast polynomial: ");
        while (temp != NULL)
        {
            if (temp->coeff > 0)
            {
                printf("+%dx^%d", temp->coeff, temp->expo);
            }
            else
            {
                printf("%dx^%d", temp->coeff, temp->expo);
            }
            temp = temp->next;
        }
    }
}
void traversep2()
{
    if (head2 == NULL)
    {
        printf("Second polinomiyal list is empty\n");
    }
    else
    {
        temp = head2;
        printf("Second polynomial: ");
        while (temp != NULL)
        {
            if (temp->coeff > 0)
            {
                printf("+%dx^%d", temp->coeff, temp->expo);
            }
            else
            {
                printf("%dx^%d", temp->coeff, temp->expo);
            }
            temp = temp->next;
        }
    }
}
void polyadd()
{
    int coeff_add;
    struct node *poly1, *poly2;
    poly1 = head1;
    poly2 = head2;
    while (poly1 != NULL && poly2 != NULL)
    {
        if (poly1->expo == poly2->expo)
        {
            coeff_add = poly1->coeff + poly2->coeff;
            createp3(coeff_add, poly1->expo);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (poly1->expo > poly2->expo)
        {
            createp3(poly1->coeff, poly1->expo);
            poly1 = poly1->next;
        }
        else
        {
            createp3(poly2->coeff, poly2->expo);
            poly2 = poly2->next;
        }
    }
}
void createp3(int c, int e)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coeff = c;
    newnode->expo = e;
    newnode->next = NULL;
    if (head3 == NULL)
    {
        head3 = newnode;
    }
    else if (head3->next == NULL)
    {
        head3->next = newnode;
    }
    else
    {
		temp=head3;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void traversep3()
{
    if (head3 == NULL)
    {
        printf("Added polinomiyal list is empty\n");
    }
    else
    {
        temp = head3;
        printf("Added polynomial: ");
        while (temp != NULL)
        {
            if (temp->coeff > 0)
            {
                printf("+%dx^%d", temp->coeff, temp->expo);
            }
            else
            {
                printf("%dx^%d", temp->coeff, temp->expo);
            }
            temp = temp->next;
        }
    }
}