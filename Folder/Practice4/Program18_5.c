#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    
    if(iNo > 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        iMult = iMult * 2; 
        printf("%d",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}