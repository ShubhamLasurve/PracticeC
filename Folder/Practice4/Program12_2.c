#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    } 
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet = true)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return 0;
}
