#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit1 = 0;
    int iDigit2 = 0;
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iSum = 0;
    int iEvenSum = 0;
        int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    {
        
        while(iNo != 0)
        {
            iDigit1 = iNo % 10;
            if((iDigit1 % 2) == 0)
            {
                iEvenSum = iEvenSum + iCnt1;
            }
            iNo = iNo/10;
            
        }
        return iEvenSum;

        
        while(iNo != 0)
        {
            iDigit2 = iNo % 10;
            if((iDigit2 % 2) != 0)
            {
                iOddSum = iOddSum +iCnt2;
            }
            iNo = iNo/10;
            
        }
        return iOddSum;
    } 
    iSum = iEvenSum - iOddSum;   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}