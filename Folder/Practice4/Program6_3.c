#include<stdio.h>
typedef int bool;

#define true 1
#define false 0

bool CheckEqual(int iNo1, int iNo2)
{
        if(iNo1 == iNo2)
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
        int iValue1 = 0;
        int iValue2 = 0;
        bool bRet = false;

        printf("Enter two numbers\n");
        scanf("%d %d",&iValue1, &iValue2);

        bRet = CheckEqual(iValue1,iValue2);

        if(bRet == true)
        {
                printf("Equal\n");
        }
        else
        {
                printf("Not equal\n");
        }

        return 0;
}
