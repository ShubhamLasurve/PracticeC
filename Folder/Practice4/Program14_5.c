#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDiv = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            iDiv = Arr[iCnt];
            printf("%d\t",iDiv);
            iDiv++;
        }
    }
}

int main()
{
        int *ptr = NULL;
        int iSize = 0;
        int i = 0;

        printf("Enter number of elements :\n");
        scanf("%d",&iSize);

        ptr = (int *)malloc(iSize * sizeof(int));

        printf("Enter the elements :\n");

        for(i = 0; i < iSize; i++)
        {
                scanf("%d",&ptr[i]);
        }

        Display(ptr,iSize);

        free(ptr);

        return 0;
}