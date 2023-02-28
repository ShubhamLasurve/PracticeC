#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEven = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }
    return iEven;
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

        iRet = CountEven(ptr,iSize);

        printf("The even count is : %d\n",iRet);

        free(ptr);

        return 0;
}