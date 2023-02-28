#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iFrequency = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
        int *ptr = NULL;
        int iSize = 0;
        int i = 0;
        int iRet = 0;
        int iValue = 0;

        printf("Enter the number to check frequency\n");
        scanf("%d",&iValue);

        printf("Enter number of elements :\n");
        scanf("%d",&iSize);

        ptr = (int *)malloc(iSize * sizeof(int));

        printf("Enter the elements :\n");

        for(i = 0; i < iSize; i++)
        {
                scanf("%d",&ptr[i]);
        }

        iRet = Frequency(ptr,iSize,iValue);

        printf("The frequency of %d is  %d\n",iValue,iRet);

        free(ptr);

        return 0;
}