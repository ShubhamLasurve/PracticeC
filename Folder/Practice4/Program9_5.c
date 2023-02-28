#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;iCnt <= iNo;iCnt = iCnt+2)
    {
        {
             iEvenFact = iEvenFact * iCnt;
        }
    }

    for(iCnt = 1;iCnt <= iNo;iCnt = iCnt+2)
    {
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    int iFactDifference = iEvenFact - iOddFact;

    return (iFactDifference);
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Odd Factorial of number is %d",iRet);

    return 0;
}