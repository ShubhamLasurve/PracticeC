#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fConvert = 0.0f;

    fConvert = ((fTemp - 32) * (5/9));

    return fConvert;

}
int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%d",&fValue);

    fRet = FhtoCs(fValue);

    printf("The conversion is %f\n",fRet);

    return 0;
}