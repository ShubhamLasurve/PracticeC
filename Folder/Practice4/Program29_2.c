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

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = true;
        }
        else
        {
            bFlag = false;
        }
    }
    if(bFlag == true)
    {
        return bFlag;
    }
    else
    {
        return 1;
    }
}

void DisplayPrime(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPrime(First->data) == true)
        {
            printf("%d is a prime number\n",First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 22);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    DisplayPrime(Head);

    return 0;
}