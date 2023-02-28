#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(ptr,iSize);

    printf("Maximum number is %d",iRet);

    free(ptr);

    return 0;
}