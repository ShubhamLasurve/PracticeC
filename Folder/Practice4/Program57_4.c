#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0,Length = 0,size = 0;
    char Data[100];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File opened successfully with fd : %d\n",fd);
    }
    
    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        size = size + Length;
    }
    printf("Size of the File is %d\n",size);

    close(fd);

    return 0;
}