#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 1;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    
    return 0;
}