#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 0;iCnt < iNo;iCnt++)
    {
        printf("$ *\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
