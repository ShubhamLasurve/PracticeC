#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0)
    {
        return 1;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        {
             iSum = iSum + iCnt;
        }
       
    }
    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("The sum is : %d\n",iRet);

    return 0;
}