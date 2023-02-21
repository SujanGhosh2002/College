// Q6. Write program to implement FCFS scheduling algorithm.
#include <stdio.h>
struct fcfs
{
    int pid, burst, waiting, turnaround;
};
void line(int x);
int main()
{
    int i, num, j;
    float waitavg = 0.0, waitsum = 0.0, turnavg = 0.0, turnsum = 0.0;
    struct fcfs p[10];
    printf("Enter the total number of processes: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter burst time for process %d : ", i + 1);
        scanf("%d", &p[i].burst);
        p[i].pid = i + 1;
    }
    for (i = 0; i < num; i++)
    {
        p[i].waiting = 0;
        p[i].turnaround = 0;
        for (j = 0; j < i; j++)
        {
            p[i].waiting = p[i].waiting + p[j].burst;
        }
        p[i].turnaround = p[i].waiting + p[i].burst;
    }
    line(70);
    printf("Process no\tBurst Time\tTurnaround Time\t\tWaiting Time\n");
    line(70);
    for (i = 0; i < num; i++)
    {
        printf("%d\t\t%d\t\t%d\t\t\t%d\n", p[i].pid, p[i].burst, p[i].turnaround, p[i].waiting);
        turnsum += p[i].turnaround;
        waitsum += p[i].waiting;
    }
    line(70);
    waitavg = waitsum / (float)num;
    turnavg = turnsum / (float)num;
    printf("\nTotal turnaround time: %f.", turnsum);
    printf("\nAverage turnaround time: %.3f.", turnavg);
    printf("\nTotal waiting time: %f.", waitsum);
    printf("\nAverage waiting time: %.3f.", waitavg);
}
void line(int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("-");
    }
    printf("\n");
}




// #include<stdio.h>
// struct fcfs
//{
//	int pid, arrival, burst, complrtion, waiting, turnaround;
// };
// void line(int x);
// int main()
//{
//	int i, num, j;
//	float compavg = 0.0, compsum = 0.0, waitavg = 0.0, waitsum = 0.0, turnavg = 0.0, turnsum = 0.0;
//	struct fcfs p[10], temp;
//	printf("Enter the total number of processes: ");
//	scanf("%d",&num);
//	for(i=0;i<num;i++)
//	{
//		printf("Enter arrival time and burst time for process %d : ",i+1);
//		scanf("%d %d",&p[i].arrival,&p[i].burst);
//		p[i].pid=i+1;
//	}
//	for(i=0;i<num-1;i++)
//	{
//		for(j=0;j<num-i-1;j++)
//		{
//			if(p[j].arrival>p[j+1].arrival)
//			{
//				temp=p[j];
//				p[j]=p[j+1];
//				p[j+1]=temp;
//			}
//		}
//	}
//	for(i=0;i<num;i++)
//	{
//		compsum=compsum+p[i].burst;
//		p[i].complrtion=compsum;
//		turnsum=p[i].complrtion-p[i].arrival;
//		p[i].turnaround=turnsum;
//		waitsum=p[i].turnaround-p[i].burst;
//		p[i].waiting=waitsum;
//	}
//	waitsum=0;
//	line(66);
//	printf("PID\tArrival\tBurst\tComplrtion\tTurnaround\tWaiting\n");
//	line(66);
//	for(i=0;i<num;i++)
//	{
//		printf("%d\t%d\t%d\t%d\t\t%d\t\t%d\t\n",p[i].pid,p[i].arrival,p[i].burst,p[i].complrtion,p[i].turnaround,p[i].waiting);
//		compsum+=p[i].complrtion;
//		turnsum+=p[i].turnaround;
//		waitsum+=p[i].waiting;
//	}
//	line(66);
//	compavg=compsum/(float)num;
//	waitavg=waitsum/(float)num;
//	turnavg=turnsum/(float)num;
//	printf("\nTotal complrtion time: %f.",compsum);
//	printf("\nAverage complrtion time: %.3f.",compavg);
//	printf("\nTotal turnaround time: %f.",turnsum);
//	printf("\nAverage turnaround time: %.3f.",turnavg);
//	printf("\nTotal waiting time: %f.",waitsum);
//	printf("\nAverage waiting time: %.3f.",waitavg);
// }
// void line(int x)
//{
//	int i;
//	for(i=0;i<x;i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//
// }