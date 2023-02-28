#include<stdio.h>

void Display(int No)
{
    static int iCnt = 0;

    if(iCnt < No)
    {
        printf("*\t");
        iCnt++;
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