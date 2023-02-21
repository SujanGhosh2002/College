// Q12. Write program to calculate sum of n numbers using thread library.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<pthread.h>
int sum;
void *run(void *param);
int main(int argc, char argv[])
{
    pthread_t tid;
    pthread_attr_t attr;
    if (argc!=2)
    {
        Printf ("Error!");
        return 1;
    }
    if(atoi(argv[1])<0)
    {
        printf("No. Should be five");
        return 1;
    }
    pttr
}