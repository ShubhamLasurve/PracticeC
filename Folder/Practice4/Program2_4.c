#include<stdio.h>

void Display(int iNo,int iFrequency)
{
   
    int iCnt = 0;
    for(iCnt = 0;iCnt < iFrequency;iCnt++)
    {
        printf("%d\t",iFrequency);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}