#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
        printf("%d #\t",iCnt);
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}