#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0; 
    while(iNo > iCnt)
    {
        printf("*\t");
        iNo--;
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