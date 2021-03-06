// program to illustrate dup2()
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
//int dup2(int oldfd, int newfd)
int main()
{
    int file_desc = open("out.txt", O_WRONLY | O_APPEND);
    // here the newfd is the file descriptor of stdout (i.e. 1)
    //dup2 takes 2 arguments one integer value and 1
    dup2(file_desc, 1);
    // All the printf statements will be written in the file
    // "out.txt"
    printf("I will be printed in the file out.txt\n");
    return 0;
}