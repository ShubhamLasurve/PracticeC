#include<stdio.h>
#include<stdbool.h>

bool CheckSepcial(char ch)
{
    if(ch == 'A')
    {
        printf("Decimal, Octal and Hexadecimal values are :%d\t, %o\t, %x\t");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    CheckSepcial(cValue);

    return 0;
}