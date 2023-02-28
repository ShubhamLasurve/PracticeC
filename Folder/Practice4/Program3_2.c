#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
   
    for(iCnt=1; iCnt <=iNo;iCnt++)
    {
        if(iNo % iCnt)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}