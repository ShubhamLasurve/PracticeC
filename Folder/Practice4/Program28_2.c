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

int SearchLastOccurace(PPNODE First, int no)
{
    PNODE temp = *First;
    int iCnt = 1;
    int iCount = 1;
    while(temp->next != NULL)
    {
        temp = temp->next;
        iCnt++;
        if(temp->data == no)
        {
           iCount = iCnt;
          
        }
        
    }
    return iCount;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    printf("Enter the number you want to search\n");
    scanf("%d",&iValue);

    iRet = SearchLastOccurace(&Head, iValue);

    printf("The Last occurace is %d\n",iRet);

    return 0;
}