#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCheck = 0;

    for(iCnt = iLength-1 ;iCnt <= 0;iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }
    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    return iCnt;
}

int main()
{
     int *ptr = NULL;
        int iSize = 0;
        int i = 0;
        int iRet = 0;
        int iValue = 0;

        printf("Enter the number to check \n");
        scanf("%d",&iValue);

        printf("Enter number of elements :\n");
        scanf("%d",&iSize);

        ptr = (int *)malloc(iSize * sizeof(int));

        printf("Enter the elements :\n");

        for(i = 0; i < iSize; i++)
        {
                scanf("%d",&ptr[i]);
        }

        iRet = LastOcc(ptr, iSize,iValue);

        printf("Last occurance is : %d\n",iRet);

        return 0;
}