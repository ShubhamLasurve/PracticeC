#include<stdio.h>

void Display(int No)
{
    static int iCnt = No;
    
    while(iCnt >= 1)
    {
        printf("%d\t*\t",iCnt);
        iCnt--;
        Display(No);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}