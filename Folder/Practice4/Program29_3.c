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


int AdditionEven(PNODE First)
{
    printf("Addition Function\n");
    int iSum = 0;
    
    while(First != NULL)
    {
        if((First->data) % 2 == 0)
        {
            iSum = iSum + (First->data);
            
        }
        First = First->next;
    }
     return iSum; 
}   

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    iRet = AdditionEven(Head);
    printf("Addition is : %d\n",iRet);

    return 0;
}