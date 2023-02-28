#include<stdio.h>

void Display(char ch)
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    for(i = ch;i <='Z';i++)
    {
        printf("%c\t",i);
    }
    for(j = ch;j >='a';j--)
    {
        printf("%c\t",j);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}