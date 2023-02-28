#include<stdio.h>

int StrlenX(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenX(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter String\n");
    scanf("%s",Arr);

    iRet = StrlenX(Arr);
    printf("%d",iRet);

    return 0;
}