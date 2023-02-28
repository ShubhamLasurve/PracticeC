#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0,Length = 0;
    char Data[20];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File opened successfully with fd : %d\n",fd);
    }
    
    read(fd,Data,18);
    printf("Data from file is : %s\n",Data);

    printf("Enter the Data that you want to write in the file\n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);

    write(fd,Data,Length);

    close(fd);

    return 0;
}