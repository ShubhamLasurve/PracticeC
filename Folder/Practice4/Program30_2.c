#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iTemp % 10;
        iRev = (iRev * 10) + iDigit;
        iTemp = iTemp / 10;
    }
    if(iRev == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPalindrome(PNODE First)
{
    bool bRet = false;
    while(First != NULL)
    {
        printf("While\n");
        bRet = CheckPalindrome(First->data);
        if(bRet == true)
        {
            printf("The number is Palindrome %d\n",First->data);
        }
        else
        {
            printf("The number is not Palindrome %d\n",First->data);
        }
        
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 414);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);

    CheckPalindrome(Head);

    return 0;
}