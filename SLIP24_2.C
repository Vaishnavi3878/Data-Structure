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
   printf("\nLinked List is:\n");
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       printf("%d\t",temp->data);
   }
}
void main()
{
    NODE *list=NULL,*temp,*temp1;
    clrscr();
    list=create(list);
    display(list);
    for(temp=list;temp->next->next!=NULL;temp=temp->next);
    temp1=temp->next;
    temp->next=NULL;
    temp1->next=list;
    list=temp1;
    display(list);
    getch();
}