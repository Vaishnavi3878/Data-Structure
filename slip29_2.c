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
        {
           list=temp=newnode;
           newnode->next=list;
        }
        else
        {
           temp->next=newnode;
           newnode->next=list;
           temp=newnode;
        }
    }
    return list;
}
void display(NODE *list)
{
   NODE *temp=list;
   do
   {
       if(temp!=NULL)
          printf("%d\t",temp->data);
       temp=temp->next;
   }while(temp!=list);
}
void main()
{
    NODE *list=NULL;
    clrscr();
    list=create(list);
    printf("\nLinked List is:\n");
    display(list);
    getch();
}