#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT Mask = 0X00000040;
    UINT Result = 0;

    Result = No ^ Mask;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);
    printf("Updated Number is %d\n",iRet);

    return 0;
}