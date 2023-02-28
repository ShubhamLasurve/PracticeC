#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConvert = 0;
    iConvert = iNo * 1000;
    return iConvert;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The conversion is %d\n",iRet);

    return 0;
}