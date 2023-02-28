#include<stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("%d",iRet);

    return 0;
}