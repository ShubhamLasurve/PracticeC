#include<stdio.h>

void Pattern(int iRows,int iCol) 
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 1; i <= iRows ;i++)
    {
        for(j = 1;j <= iCol;j++)
        {
                printf("%c\t",j);
                
        } 
        printf("\n"); 
        j++;       
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}