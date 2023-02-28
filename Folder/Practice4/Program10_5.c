#include<stdio.h>

double SquareMeter(int iNo)
{
    double dConvert = 0.0;

    dConvert = iNo * 0.0929;

    return dConvert;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Conversion is :%f\n",dRet);

    return 0;
}