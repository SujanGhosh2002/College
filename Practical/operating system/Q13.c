// Q13. Write a program to implement first-fit, best-fit and worst-fit allocation strategies.

#include <stdio.h>
#include <stdlib.h>
int ch, size, block[100], process[100], i, j, blocks_no, processes_no, allocation[100];
void input();
void fist_fit();
void best_fit();
void worst_fit();
void main()
{

    printf("1. FIRST FIT\n");
    printf("2. BEST FIT\n");
    printf("3. WORST FIT\n");
    printf("4. EXIT\n");
    while (1)
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            input();
            fist_fit();
            break;
        case 2:
            input();
            best_fit();
            break;
        case 3:
            input();
            worst_fit();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalide Option");
        }
    }
}
void input()
{
    printf("\nEnter no. of blocks: ");
    scanf("%d", &blocks_no);
    printf("Enter size of each block: ");
    for (i = 0; i < blocks_no; i++)
    {
        scanf("%d", &block[i]);
    }
    printf("\nEnter no. of processes: ");
    scanf("%d", &processes_no);
    printf("Enter size of each process: ");
    for (i = 0; i < processes_no; i++)
    {
        scanf("%d", &process[i]);
    }
}
void fist_fit()
{
    for (i = 0; i < processes_no; i++)
    {
        for (j = 0; j < blocks_no; j++)
        {
            if (block[j] >= process[i])
            {
                allocation[i]=j;
                ptintf("%d",i);
            }
        }
    }
}