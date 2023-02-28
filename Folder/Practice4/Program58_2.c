#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CountSmall(char FName[])
{
    int fd = 0,Length = 0,i = 0,Count = 0;
    char Data[30];

    fd = open(FName, O_RDONLY);

    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i < Length;i++)
        {
            if((Data[i] >= 'a') && (Data[i] <= 'z'))
            {
                Count++;
            }
        }
    }
    close(fd);
    return Count;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name\n");
    scanf("%s",&FileName);

    iRet = CountSmall(FileName);
    printf("Number of Small characters are %d\n",iRet);

    return 0;
}