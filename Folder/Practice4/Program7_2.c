#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iSum = iSum + 1;
        printf("%d\t",iSum);   
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
