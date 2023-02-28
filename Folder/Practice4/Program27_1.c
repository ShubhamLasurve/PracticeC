#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(ch == *str)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
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
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character\n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr, cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}