#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if((iNo % 5)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("It is Divisible by 5");
    }
    else 
    {
        printf("It is not Divisible by 5");
    }

    return 0;
}