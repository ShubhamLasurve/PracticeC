#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCheck = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCheck++;
        }
    }
    if(iCheck == 0)
    {
        return -1;
    }
    return iCheck;
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

        iRet = FirstOcc(ptr, iSize,iValue);

        printf("First occurance is : %d\n",iRet);

        return 0;
}