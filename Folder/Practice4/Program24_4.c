#include<stdio.h>
#include<stdbool.h>

bool CheckSepcial(char ch)
{
    if((ch == '!')||(ch == '@')||(ch == '#')||(ch == '%')||(ch == '^')||(ch == '&')||(ch == '*'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = CheckSepcial(cValue);

    if(bRet == true)
    {
        printf("It is a special Character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}