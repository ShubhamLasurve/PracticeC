#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];
    
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return (iMax - iMin);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Difference(ptr,iSize);

    printf("Differenceis %d",iRet);

    free(ptr);

    return 0;
}