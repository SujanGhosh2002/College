// Q3. WRITE A PROGRAM to report behaviour of Linux kernel including information on configured memory, amount of free and used memory. (memory information)
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int pid;
    pid = fork();
    if (pid<0)
    {
        printf("\n Error ");
        exit(1);
    }
    else if (pid == 0)
    {
        printf("\n Hello I am child process");
        printf("\n my pid is %d ", getpid());
        exit(0);
    }
    else if (pid > 0)
    {
        printf("\n Hello i am parent process ");
        printf("\n My actual pid is %d \n", getpid());
        wait(NULL);
        exit(1);
    }
}
