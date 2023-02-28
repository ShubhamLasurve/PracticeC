#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0; 
    int iEvenCnt = 0;
    int iOddCnt = 0;

        for(iCnt = 0;iCnt < iLength;iCnt++)
        {
                if((Arr[iCnt] % 2) == 0)
                {
                        iEvenCnt++;     
                }
        
                else
                {
                       iOddCnt++;
                }      
        }
        return (iEvenCnt -iOddCnt);
}
int main()
{
    int *p = NULL;
    int iSize = 0;
    int iCnt =0;
    int iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p ==  NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter  elements",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}