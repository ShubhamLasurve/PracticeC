#include<stdio.h>

void Display(int No)
{
    static int iCnt = 1;
    static char ch = 'a';

    while(iCnt <= No)
    {
        printf("%c\t",ch);
        ch++;
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