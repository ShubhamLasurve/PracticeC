#include<stdio.h>

void Display(int No)
{
    static int iCnt = 1;

    if(iCnt <= No)
    {
        printf("%d\t",iCnt);
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