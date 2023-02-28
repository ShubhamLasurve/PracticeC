#include<stdio.h>
#include<stdbool.h>

bool DisplaySchedule(char ch)
{
    
    if((ch == 'A') || (ch == 'a'))
    {
        return("Your exam is at 7 AM");
    }
    else if((ch == 'B') || (ch == 'b')) 
    {
        return("Your exam is at 8:30 AM");
    }
    else if((ch == 'C') || (ch == 'c')) 
    {
        return("Your exam is at 9:20 AM");
    }
    else if((ch == 'D') ||(ch == 'd'))
    {
        return("Your exam is at 10:30 AM");
    } 
}

int main()
{
    char cValue = 0;
    bool bRet = false;

    printf("Enter your Division\n");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}