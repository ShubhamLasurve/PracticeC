#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    if(('a' <= ch) && (ch <= 'z'))
    {
        return true;
    }
    else if(('A' <= ch) && (ch <='Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = 0;
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Alphabet\n");
    }
    else
    {
        printf("It is not an Alphabet\n");
    }

    return 0;
}