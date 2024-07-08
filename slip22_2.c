#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *create(NODE *list)
{
    NODE *temp,*newnode;
    int i,n;
    printf("\nEnter how many nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->next=NULL;
        printf("\nEnter the node data:");
        scanf("%d",&newnode->data);
        if(list==NULL)
           list=temp=newnode;
        else
        {
           temp->next=newnode;
           temp=newnode;
        }
    }
    return list;
}
void display(NODE *list)
{
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       printf("%d\t",temp->data);
   }
}
void count(NODE *list)
{
   NODE *temp;
   int zcnt=0,ocnt=0,ecnt=0;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       if(temp->data!=0)
          zcnt++;
       if(temp->data%2!=0)
          ocnt++;
       else
          ecnt++;
    }
    printf("\nNon Zero Elements count=%d",zcnt);
    printf("\nOdd numbers count=%d",ocnt);
    printf("\nEven numbers count=%d",ecnt);
}
void main()
{
    NODE *list=NULL;
    clrscr();
    list=create(list);
    printf("\nLinked List:\n");
    display(list);
    count(list);
    getch();
}
