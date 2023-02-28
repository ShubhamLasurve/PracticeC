#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;
    iDollar = iNo * 70;
    return iDollar;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value of INR is %d",iRet);

    return 0;
}