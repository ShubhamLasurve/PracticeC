#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CreateFile(char Name[])
{
    int fd = 0;

    fd = creat(Name,0777);
    return fd;
}
int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to create\n");
    scanf("%s",Fname);

    fd = CreateFile(Fname);
    
    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File created successfully with fd : %d\n",fd);
    }
    close(fd);
    
    return 0;
}