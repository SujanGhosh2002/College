//// Q5. WRITE A PROGRAM to copy files using system calls.
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[])
//{
//  FILE *from, *to;
//  char ch;
//
//
//  if(argc!=3) {
//    printf("Usage: copy  \n");
//    exit(1);
//  }
//
//  /* open source file */
//  if((from = fopen(argv[1], "rb"))==NULL) {
//    printf("Cannot open source file.\n");
//    exit(1);
//  }
//
//  /* open destination file */
//  if((to = fopen(argv[2], "wb"))==NULL) {
//    printf("Cannot open destination file.\n");
//    exit(1);
//  }
//
//  /* copy the file */
//  while(!feof(from)) {
//    ch = fgetc(from);
//    if(ferror(from)) {
//      printf("Error reading source file.\n");
//      exit(1);
//    }
//    if(!feof(from)) fputc(ch, to);
//    if(ferror(to)) {
//      printf("Error writing destination file.\n");
//      exit(1);
//    }
//  }
//
//  if(fclose(from)==EOF) {
//    printf("Error closing source file.\n");
//    exit(1);
//  }
//
//  if(fclose(to)==EOF) {
//    printf("Error closing destination file.\n");
//    exit(1);
//  }
//
//  return 0;
//}

// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h> 

// void main()
// {
// 	char buf;
// 	int fd_one, fd_two;

// 	fd_one = open("first_file", O_RDONLY);

// 	if (fd_one == -1)
// 	{
// 		printf("Error opening first_file\n");
// 		close(fd_one);
// 		return;
// 	}

// 	fd_two = open("second_file", O_WRONLY | O_CREAT,S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	
// 	while(read(fd_one, &buf, 1))
// 	{
// 		write(fd_two, &buf, 1);
// 	}

// 	printf("Successful copy");

// 	close(fd_one);
// 	close(fd_two);
// }