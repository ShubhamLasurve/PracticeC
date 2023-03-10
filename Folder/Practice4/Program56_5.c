#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigit = 0;
    static int iRev = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("%d",iRet);

    return 0;
}