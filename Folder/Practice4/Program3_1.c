#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
     for(iCnt = 1;iCnt <=iNo;iCnt++)
        {
                printf(" %d\n",iCnt * 2);
        }    
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}