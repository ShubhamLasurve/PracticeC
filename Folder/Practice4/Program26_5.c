#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("%d\n",iRet);

    return 0;
}