#include<stdio.h>
typedef int bool;

#define true 1
#define false 0

bool CheckGreater(int iNo)
{
        int iDigit = 0;
        int iNum = 9;

        while(iNo != 0)
        {
                iDigit = iNo % 10;
                if(iNo > iNum)
                {
                        iNum = iNo;
                }
                iNo = iNo /10;
        }
        if(iNum > 100)
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

        printf("Please enter the number\n");
        scanf("%d",&iValue);

        bRet = CheckGreater(iValue);
        if(bRet == true)
        {
                printf("Greater\n");
        } 
        else
        {
                printf("Smaller\n");
        }

        return 0;
}