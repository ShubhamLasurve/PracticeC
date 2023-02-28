#include<stdio.h>

int WhiteSpaces(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpaces(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpaces(Arr);
    printf("%d",iRet);

    return 0;
}