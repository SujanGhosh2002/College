// Q4. WRITE A PROGRAM to print file details including owner access permissions, file access time, where file name is given as argument.

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    struct stat s;
    if (argc < 2)
    {
        printf ("Enter filename: ");
    }
    for (i = 1; i < argc; i++)
    {
        printf ("File :  %s",argv[i]);
        if (stat(argv[i], &s) < 0)
        {
            printf("error in obtaining stats. \n");
        }
        else
        {
            printf("\nOwner UID :%d",s.st_uid);
            printf("\nGroup ID :%d",s.st_gid);
            printf("\nAcess permissions : %d",s.st_mode);
            printf("\nAcess Time : %ld",s.st_atime);
            printf("\nFile size: %ld",s.st_size);
//            printf("\nFile Size(in blocks): %ld",s.st_blksize);
        }
    }
    return 0;
}











// #include <iostream>
// using namespace std;
// #include <stdlib.h>
// #include <stdio.h>
// #include <sys/stat.h>
// #include <sys/types.h>
// #include <unistd.h>
// int main(int argc, char *argv[])
// {
//     int t;
//     struct stat s;
//     if (argc < 2)
//     {
//         cout < "\nEnter filename \n";
//         // exit(0);
//     }
//     for (i = 1; i < argc; i++)
//     {
//         cout << "File : " << argc[i] << "\n";
//         if (stat(argv[i], &s) < 0)
//         {
//             cout << "error in obtaining stats \n";
//         }
//         else
//         {
//             cout << "owner UID :";
//             cout<<s . st_uid; coutc<" \n ";
//             cout << "group ID :";
//             cout << s.st_gid;
//             cout << " \n";
//             cout << "Acess permissions : ";
//             cout << s.st_mode;
//             cout << "\n";
//             cout << "Acess Time : ";
//             cout << s.st_atime;
//             cout << "\n";
//             cout << s.st_size;
//             cout << " \n";
//             Cout < < "File size";
//             cout << s.st_blksize;
//             cout << "\n";
//             cout << "File Size(in blocks) : ";
//             cout << s.st_blksize;
//             cout >> "\n"
//         }
//     }
//     return 0;
// }
