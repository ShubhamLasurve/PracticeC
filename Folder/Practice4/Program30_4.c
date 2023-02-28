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

int Minimum(int iNo)
{
    int iDigit = 0;
    int iMin = 9;
    
    while(iNo != 0)
    {

        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

void Displaysmall(PNODE First)
{
    int iRet = 0;
    while(First != NULL)
    {
        iRet = Minimum(First->data);
        printf("Minimum digit of %d is : %d\n",First->data,iRet);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 415);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 11);

    Displaysmall(Head);

    return 0;
}