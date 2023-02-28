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

int Maximum(int iNo)
{
    int iDigit = 0;
    int iMax = 0;
    
    while(iNo != 0)
    {

        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

void DisplayLarge(PNODE First)
{
    int iRet = 0;
    while(First != NULL)
    {
        iRet = Maximum(First->data);
        printf("Maximum digit of %d is : %d\n",First->data,iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 419);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 11);

    DisplayLarge(Head);

    return 0;
}