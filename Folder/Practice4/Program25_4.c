#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str =='e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    
}

int main()
{
    char Arr[20];
    bool bRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",&Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }
    return 0;
}