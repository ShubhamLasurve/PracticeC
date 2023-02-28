#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iFrequency = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
        int *ptr = NULL;
        int iSize = 0;
        int i = 0;
        bool bRet = false;

        printf("Enter number of elements :\n");
        scanf("%d",&iSize);

        ptr = (int *)malloc(iSize * sizeof(int));

        printf("Enter the elements :\n");

        for(i = 0; i < iSize; i++)
        {
                scanf("%d",&ptr[i]);
        }

        bRet = Check(ptr,iSize);

        if(bRet == true)
        {
            printf("11 is present\n");
        }
        else
        {
            printf("11 is not present\n");
        }

        free(ptr);

        return 0;
}