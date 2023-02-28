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

    newn->data = no;
    newn->next = NULL;

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

int Maximum(PPNODE First)
{
    PNODE temp = *First;
    int iMax = temp->data;
    
    while(temp->next != NULL)
    {  
        if(temp ->data > iMax) 
        {   
            iMax = temp->data;
        }
        temp = temp->next;
    }
    return iMax;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    iRet = Maximum(&Head);

    printf("The Maximum number is %d\n",iRet);

    return 0;
}