#include<stdio.h>

void DisplayASCII(int iCnt)
{
    for(iCnt = 0;iCnt<=127;iCnt++)
    {
        printf("%c\t, %d\t, %x\t ,%o\t",iCnt,iCnt,iCnt,iCnt);
    }

}

int main()
{
    int i = 0;
    printf("Enter the number\n");
    scanf("%d",&i);

    DisplayASCII(i);

    return 0;
}