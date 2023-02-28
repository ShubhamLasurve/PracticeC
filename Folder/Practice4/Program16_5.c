#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    if(iProduct == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
    return iProduct;
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

        iRet = Product(ptr,iSize);

        printf("Product is %d",iRet);

        free(ptr);

        return 0;
}