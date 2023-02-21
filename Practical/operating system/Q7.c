// Q7. Write program to implement Round Robin scheduling algorithm.
#include <stdio.h>
struct rr
{
	int pid, burst, start_burst, waiting, turnaround;
};
 void line(int x);
int main()
{
    int num, time_quantum,i, count = 0,temp,temp2=0;
    float waitavg = 0.0, waitsum = 0.0, turnavg = 0.0, turnsum = 0.0;
    struct rr p[10];
    printf("Enter number of processes:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
    	printf("Enter burst time for process %d : ",i+1);
        scanf("%d", &p[i].burst);
        p[i].pid=i+1;
        p[i].start_burst = p[i].burst;
    }
    printf("Enter time quantum: ");
    scanf("%d", &time_quantum);
    while (1)
    {
        for (i = 0, count = 0; i < num; i++)
        {
            temp = time_quantum;
            if (p[i].start_burst == 0)
            {
                count++;
                continue;
            }
            if (p[i].start_burst > time_quantum)
            {
                p[i].start_burst = p[i].start_burst - time_quantum;
            }
            else if (p[i].start_burst >= 0)
            {
                temp = p[i].start_burst;
                p[i].start_burst = 0;
            }
            temp2 = temp2 + temp;
            p[i].turnaround = temp2;
        }
        if (num == count)
        {
            break;
        }
    }
    line(70);
    printf("Process no\tBurst Time\tTurnaround Time\t\tWaiting Time\n");
    line(70);
    for (i = 0; i < num; i++)
    {
        p[i].waiting = p[i].turnaround - p[i].burst;
        printf("%d\t\t%d\t\t%d\t\t\t%d\n", p[i].pid, p[i].burst, p[i].turnaround, p[i].waiting);
        turnsum += p[i].turnaround;
        waitsum += p[i].waiting;
    }
    line(70);
	waitavg=waitsum/(float)num;
	turnavg=turnsum/(float)num;
	printf("\nTotal turnaround time: %f.",turnsum);
	printf("\nAverage turnaround time: %.3f.",turnavg);
	printf("\nTotal waiting time: %f.",waitsum);
	printf("\nAverage waiting time: %.3f.",waitavg);
}
void line(int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("-");
	}
	printf("\n");
}






// #include<stdio.h>
// struct rr
//{
//	int pid, burst, start_burst, waiting, turnaround;
// };
// void line(int x);
// int main()
//{
//	int i, num, time_quantum, count=0, temp, temp2=0;
//	float waitavg = 0.0, waitsum = 0.0, turnavg = 0.0, turnsum = 0.0;
//	struct rr p[10];
//	printf("Enter the total number of processes: ");
//	scanf("%d",&num);
//	for(i=0;i<num;i++)
//	{
//		printf("Enter burst time for process %d : ",i+1);
//		scanf("%d",&p[i].burst);
//		p[i].pid=i+1;
//        p[i].start_burst=p[i].burst;
//	}
//    printf("Enter time quantum: ");
//    scanf("%d",time_quantum);
//    while(1)
//    {
//        for(i=0,count=0;i<num;i++)
//        {
//            temp=time_quantum;
//            if(p[i].start_burst==0)
//            {
//                count++;
//                continue;
//            }
//            if(p[i].start_burst>time_quantum)
//            {
//                p[i].start_burst=p[i].start_burst-time_quantum;
//            }
//            else
//            {
//                if (p[i].start_burst>=0)
//                {
//                    temp=p[i].start_burst;
//                    p[i].start_burst=0;
//                }
//                temp2=temp2+temp;
//                p[i].turnaround=temp2;
//            }           
//        }
//        if(num==count)
//        {
//       		break;
//        } 
//    }
//	line(70);
//    printf("Process no\tBurst Time\tTurnaround Time\t\tWaiting Time\n");
//    line(70);
//    for (i = 0; i < num; i++)
//    {
//    	p[i].waiting = p[i].turnaround - p[i].burst;
//        printf("%d\t\t%d\t\t%d\t\t\t%d\n", p[i].pid, p[i].burst, p[i].turnaround, p[i].waiting);
//        turnsum += p[i].turnaround;
//        waitsum += p[i].waiting;
//    }
//    line(70);
//	waitavg=waitsum/(float)num;
//	turnavg=turnsum/(float)num;
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