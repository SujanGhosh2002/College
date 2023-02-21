#include<stdio.h>
struct sjf
{
    int p,sb,b,w,t;
};
void line(int x);
int main()
{
    int n,i,j,temp,tq,temp2=0,count=0;
    float ws=0.0,wa=0.0,ts=0.0,ta=0.0;
    struct sjf a[10];
    printf("Enter process of number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter burst number for process %d: ",i+1);
        scanf("%d",&a[i].b);
        a[i].p=i+1;
        a[i].sb=a[i].b;
    }
    printf("Enter time quantum: ");
    scanf("%d",&tq);
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=tq;
            if(a[i].sb==0)
            {
                count++;
                continue;
            }
            if(a[i].sb>tq)
            {
                a[i].sb=a[i].sb-tq;
            }
            else if(a[i].sb<=0)
            {
                temp=a[i].sb;
                a[i].sb=0;
            }
            temp2=temp2+temp;
            a[i].t=temp2;
        }
        if (n==count)
        {
            break;
        } 
    }
    line(70);
    printf("process no\tbrust time\twaiting time\tturnaround time\n");
    line(70);
    for(i=0;i<n;i++)
    {
        a[i].w=a[i].t-a[i].b;
        printf("%d\t\t%d\t\t%d\t\t%d\n",a[i].p,a[i].b,a[i].w,a[i].t);
        ws+=a[i].w;
        ts+=a[i].t;
    }
    wa=ws/n;
    ta=ts/n;
    printf("\nsum of waiting time: %f",ws);
    printf("\nAverage of waiting time: %f",wa);
    printf("\nsum of turnaround time: %f",ts);
    printf("\nAverage of turnaround time: %f",ta);
    return 0;
}
void line(int x)
{
    for(int i=0;i<x;i++) 
    {
        printf("-");
    }
    printf("\n");
}








// #include<stdio.h>
// struct sjf
// {
//     int p,b,w,t;
// };
// void line(int x);
// int main()
// {
//     int n,i,j,temp;
//     float ws=0.0,wa=0.0,ts=0.0,ta=0.0;
//     struct sjf a[10];
//     printf("Enter process of number: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("Enter burst number for process %d: ",i+1);
//         scanf("%d",&a[i].b);
//         a[i].p=i+1;
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(a[j].b>a[j+1].b)
//             {
//                 temp=a[j].b;
//                 a[j].b=a[j+1].b;
//                 a[j+1].b=temp;
//                 temp=a[j].p;
//                 a[j].p=a[j+1].p;
//                 a[j+1].p=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         a[i].w=0;
//         a[i].t=0;
//         for(j=0;j<i;j++)
//         {
//             a[i].w=a[i].w+a[j].b;
//         }
//         a[i].t=a[i].w+a[i].b;
//     }
//     line(70);
//     printf("process no\tbrust time\twaiting time\tturnaround time\n");
//     line(70);
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t\t%d\t\t%d\t\t%d\n",a[i].p,a[i].b,a[i].w,a[i].t);
//         ws+=a[i].w;
//         ts+=a[i].t;
//     }
//     wa=ws/n;
//     ta=ts/n;
//     printf("\nsum of waiting time: %f",ws);
//     printf("\nAverage of waiting time: %f",wa);
//     printf("\nsum of turnaround time: %f",ts);
//     printf("\nAverage of turnaround time: %f",ta);
//     return 0;
// }
// void line(int x)
// {
//     for(int i=0;i<x;i++) 
//     {
//         printf("-");
//     }
//     printf("\n");
// }









// #include<stdio.h>
// struct fcfs
// {
//     int p,b,w,t;
// };
// void line(int x);
// int main()
// {
//     int n,i,j;
//     float ws=0.0,wa=0.0,ts=0.0,ta=0.0;
//     struct fcfs a[10];
//     printf("Enter process of number: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("Enter burst number for process %d: ",i+1);
//         scanf("%d",&a[i].b);
//         a[i].p=i+1;
//     }
//     for(i=0;i<n;i++)
//     {
//         a[i].w=0;
//         a[i].t=0;
//         for(j=0;j<i;j++)
//         {
//             a[i].w=a[i].w+a[j].b;
//         }
//         a[i].t=a[i].w+a[i].b;
//     }
//     line(70);
//     printf("process no\tbrust time\twaiting time\tturnaround time\n");
//     line(70);
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t\t%d\t\t%d\t\t%d\n",a[i].p,a[i].b,a[i].w,a[i].t);
//         ws+=a[i].w;
//         ts+=a[i].t;
//     }
//     wa=ws/n;
//     ta=ts/n;
//     printf("\nsum of waiting time: %f",ws);
//     printf("\nAverage of waiting time: %f",wa);
//     printf("\nsum of turnaround time: %f",ts);
//     printf("\nAverage of turnaround time: %f",ta);
//     return 0;
// }
// void line(int x)
// {
//     for(int i=0;i<x;i++) 
//     {
//         printf("-");
//     }
//     printf("\n");
// }































// #include <stdio.h>
// struct rr
// {
//     int p, sb, b, w, t;
// };
// void line(int x);
// int main()
// {
//     int i, j, n, tq, temp, count = 0, temp2 = 0;
//     float ws = 0.0, wa = 0.0, ts = 0.0, ta = 0.0;
//     struct rr a[10];
//     printf("Enter number of process: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter burst time for process %d : ", i + 1);
//         scanf("%d", &a[i].b);
//         a[i].p = i + 1;
//         a[i].sb = a[i].b;
//     }
//     printf("Enter time Quamtum: ");
//     scanf("%d", &tq);
//     while (1)
//     {
//         for (i = 0, count = 0; i < n; i++)
//         {
//             temp = tq;
//             while (a[i].sb == tq)
//             {
//                 count++;
//                 continue;
//             }
//             if (a[i].sb > tq)
//             {
//                 a[i].sb = a[i].sb - tq;
//             }
//             else if (a[i].sb >= 0)
//             {
//                 temp = a[i].sb;
//                 a[i].sb = 0;
//             }
//             temp2 = temp2 + temp;
//             a[i].t = temp2;
//         }
//         if (n == count)
//         {
//             break;
//         }
//     }
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d", a[i].b);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     a[i].w = 0;
    //     a[i].t = 0;
    //     for (j = 0; j < i; j++)
    //     {
    //         a[i].w = a[i].w + a[j].b;
    //     }
    //     a[i].t = a[i].w + a[i].b;
    // }
//     line(70);
//     printf("process no\tburst time\twaiting time\ttarnaround time\n");
//     line(70);
//     for (i = 0; i < n; i++)
//     {
//         a[i].w = a[i].t - a[i].b;
//         printf("%d\t\t%d\t\t%d\t\t%d\n", a[i].p, a[i].b, a[i].w, a[i].t);
//         ws += a[i].w;
//         ts += a[i].t;
//     }
//     line(70);
//     wa = ws / (float)n;
//     ta = ts / (float)n;
//     printf("\nSum of waiting time: %.3f", ws);
//     printf("\nAverage of waiting time: %.3f", wa);
//     printf("\nSum of tarnaround time: %.3f", ts);
//     printf("\nAverage of tarnaround time: %.3f", ta);
//     return 0;
// }
// void line(int x)
// {
//     for (int i = 0; i < x; i++)
//     {
//         printf("-");
//     }
//     printf("\n");
// }

// #include <stdio.h>
// struct sjf
// {
//     int p, b, w, t;
// };
// void line(int x);
// int main()
// {
//     int i, j, n, temp;
//     float ws = 0.0, wa = 0.0, ts = 0.0, ta = 0.0;
//     struct sjf a[10];
//     printf("Enter number of process: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter burst time for process %d : ", i + 1);
//         scanf("%d", &a[i].b);
//         a[i].p = i + 1;
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n -1- i; j++)
//         {
//             if (a[j].b > a[j + 1].b)
//             {
//                 temp = a[j].b;
//                 a[j].b = a[j + 1].b;
//                 a[j + 1].b = temp;

//                 temp = a[j].p;
//                 a[j].p = a[j + 1].p;
//                 a[j + 1].p = temp;
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%d",a[i].b);
//     }
//     for (i = 0; i < n; i++)
//     {
//         a[i].w = 0;
//         a[i].t = 0;
//         for (j = 0; j < i; j++)
//         {
//             a[i].w = a[i].w + a[j].b;
//         }
//         a[i].t = a[i].w + a[i].b;
//     }
//     line(70);
//     printf("process no\tburst time\twaiting time\ttarnaround time\n");
//     line(70);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t\t%d\t\t%d\t\t%d\n", a[i].p, a[i].b, a[i].w, a[i].t);
//         ws += a[i].w;
//         ts += a[i].t;
//     }
//     line(70);
//     wa = ws / (float)n;
//     ta = ts / (float)n;
//     printf("\nSum of waiting time: %.3f", ws);
//     printf("\nAverage of waiting time: %.3f", wa);
//     printf("\nSum of tarnaround time: %.3f", ts);
//     printf("\nAverage of tarnaround time: %.3f", ta);
//     return 0;
// }
// void line(int x)
// {
//     for (int i = 0; i < x; i++)
//     {
//         printf("-");
//     }
//     printf("\n");
// }

// #include <stdio.h>
// struct fcfs
// {
//     int p, b, w, t;
// };
// void line(int x);
// int main()
// {
//     int i,j,n;
//     float ws = 0.0, wa = 0.0, ts = 0.0, ta = 0.0;
//     struct fcfs a[10];
//     printf("Enter number of process: ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//     {
//         printf("Enter burst time for process %d : ",i+1);
//         scanf("%d",&a[i].b);
//         a[i].p=i+1;
//     }
//     for(i=0;i<n;i++)
//     {
//         a[i].w=0;
//         a[i].t=0;
//         for(j=0;j<i;j++)
//         {
//             a[i].w=a[i].w+a[j].b;
//         }
//         a[i].t=a[i].w+a[i].b;
//     }
//     line(70);
//     printf("process no\tburst time\twaiting time\ttarnaround time\n");
//     line(70);
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t\t%d\t\t%d\t\t%d\n",a[i].p,a[i].b,a[i].w,a[i].t);
//         ws+=a[i].w;
//         ts+=a[i].t;
//     }
//     line(70);
//     wa=ws/(float)n;
//     ta=ts/(float)n;
//     printf("\nSum of waiting time: %.3f",ws);
//     printf("\nAverage of waiting time: %.3f",wa);
//     printf("\nSum of tarnaround time: %.3f",ts);
//     printf("\nAverage of tarnaround time: %.3f",ta);
//     return 0;
// }
// void line(int x)
// {
//     for(int i=0; i<x; i++)
//     {
//         printf("-");
//     }
//     printf("\n");
// }

// #include <stdio.h>
// struct fcfs
// {
//     int p, b, t, w;
// };
// void line(int x);
// int main()
// {
//     int i, j, n;
//     float ws=0.0,wa=0.0,ts=0.0,ta=0.0;
//     struct fcfs a[10];
//     printf("Enter total number of proces: ");
//     scanf("%d",&n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter brust time for process %d: ", i+1);
//         scanf("%d", &a[i].b);
//         a[i].p = i + 1;
//     }
//     for (i = 0; i < n; i++)
//     {
//         a[i].w = 0;
//         a[i].t = 0;
//         for (j = 0; j < i; j++)
//         {
//             a[i].w = a[i].w + a[j].b;
//         }
//         a[i].t = a[i].w + a[i].b;
//     }
//     line(70);
//     printf("Process no\tBurst Time\tTurnaround Time\t\tWaiting Time\n");
//     line(70);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t\t%d\t\t%d\t\t\t%d\n", a[i].p, a[i].b, a[i].t, a[i].w);
//         ts += a[i].t;
//         ws += a[i].w;
//     }
//     line(70);
//     wa = ws / (float)n;
//     ta = ts / (float)n;
//     printf("\nTotal turnaround time: %.3f.", ts);
//     printf("\nAverage turnaround time: %.3f.", ta);
//     printf("\nTotal waiting time: %.3f.", ws);
//     printf("\nAverage waiting time: %.3f.", wa);
// }
// void line(int x)
// {
//     for (int i = 0; i < x; i++)
//     {
//         printf("-");
//     }
//     printf("\n");
// }