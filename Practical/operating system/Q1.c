// Q1. WRITE A PROGRAM (using fork() and/or exec() commands) where parent and child execute:
//     a) same program, same code.
//     b) same program, different code.
//     c) before terminating, the parent waits for the child to finish its task.

// #include<stdio.h>
// #include<unistd.h>
// #include<stdlib.h>
// void main()
// {
//     fork();
//     printf("Sujan Ghosh \n");
// }

// Q.a)

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    pid_t pid, p;
    p = fork();
    pid = getpid();
    if (p < 0)
    {
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    printf("output of fork id : %d \n", p);
    printf("process id is : %d \n", pid);
    return 0;
}

// Q.b

// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
// int main()
// {
//     int pid;
//     pid = fork();
//     if (pid < 0)
//     {
//         printf("\n Error ");
//         exit(1);
//     }

//     else if (pid == 0)
//     {
//         printf("\n Hello I am child process ");
//         printf("\n my pid is %d ", getpid());
//         exit(0);
//     }

//     else
//     {
//         printf("\n Hello i am parent process ");
//         printf("\n My actual pid is %d \n", getpid());
//         exit(1);
//     }
// }

// Q.c

// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>

// int main()
// {
//     int pid;
//     pid = fork();
//     if (pid < 0)
//     {
//         printf("\n Error");
//         exit(1);
//     }
//     else if (pid == 0)
//     {
//         printf(" \n Hello I am child process ");
//         printf("\n my pid is %d", getpid());
//         exit(0);
//     }
//     else if (pid > 0)
//     {
//         printf("\n Hello i am parent process");
//         printf(" \n My actual pid is %d \n", getpid());
//         wait(NULL);
//         exit(1);
//     }
// }
