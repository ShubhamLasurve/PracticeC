#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt = iCnt+2)
    {
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d",iRet);

    return 0;
}