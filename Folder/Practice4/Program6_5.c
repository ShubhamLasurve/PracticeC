#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
        float fDiv;
        if(iNo1 == 0)
        {
                return 1;
        }
        if(iNo2 == 0)
        {
                return 1;
        }
        fDiv = (iNo2 / iNo1) * 100.0;
        return fDiv;
}
int main()
{
        int iValue1 = 0;
        int iValue2 = 0;
        float fRet = 0;

        printf("Please enter total marks\n");
        scanf("%d",&iValue1);
        
        printf("Please enter obtained marks\n");
        scanf("%d",&iValue2);

        fRet = Percentage(iValue1,iValue2);
        printf("The percentage are %f\n",fRet);

        return 0;
}