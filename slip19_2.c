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
   for(temp=list;temp!=NULL;temp=temp->next->next)
   {
       printf("%d\t",temp->data);
   }
}
void main()
{
    NODE *list=NULL;
    int num,i;
    clrscr();
    list=create(list);
    printf("\nLinked List:");
    display(list);
    getch();
}
