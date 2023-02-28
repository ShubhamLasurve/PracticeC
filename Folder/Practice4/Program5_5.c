#include<stdio.h>

int SumNonFact(int iNo)
{
        int iCnt = 0;
       
        int iSum = 0;
        int iSum1 = 0;
       

         for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
         {
                if(iNo % iCnt == 0)
                {
                       iSum1 =iSum1 + iCnt;
                }
                
        }
        return iSum1;

        int iSum2 = 0;
        for(iCnt = 1;iCnt < iNo; iCnt++)
        {
                if((iNo % iCnt) != 0)
                {
                        iSum2 = iSum2 + iCnt;
                }
        }
        return iSum2;
        iSum =iSum1-  iSum2;
        return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}