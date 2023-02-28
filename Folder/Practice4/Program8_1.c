#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is small\n");
        return;
    }

    if(iNo > 100)
    {
        printf("Number is large\n");
        return;
    }
    
    if(50 < iNo < 100)
    {
        printf("Number is medium\n");
        return;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}