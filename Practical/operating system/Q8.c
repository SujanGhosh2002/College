// Q8. Write program to implement SJF scheduling algorithm.
#include <stdio.h>
struct sjf
{
    int pid, burst, waiting, turnaround;
};
void line(int x);
int main()
{
    int i, num, j, temp;
    float waitavg = 0.0, waitsum = 0.0, turnavg = 0.0, turnsum = 0.0;
    struct sjf p[10];
    printf("Enter the total number of processes: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter burst time for process %d : ", i + 1);
        scanf("%d", &p[i].burst);
        p[i].pid = i + 1;
    }
    for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(p[j].burst>p[j+1].burst)
			{
				temp=p[j].burst;
				p[j].burst=p[j+1].burst;
				p[j+1].burst=temp; 
				temp=p[j].pid;
				p[j].pid=p[j+1].pid;
				p[j+1].pid=temp; 
			}
		}
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
    return 0;
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