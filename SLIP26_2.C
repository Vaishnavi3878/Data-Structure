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
void main()
{
    NODE *list1=NULL,*list2=NULL,*temp,*temp1;
    clrscr();
    list1=create(list1);
    printf("\nFirst Linked List is:\n");
    display(list1);
    list2=create(list2);
    printf("\nSecond Linked List is:\n");
    display(list2);
    for(temp=list1;temp->next!=NULL;temp=temp->next);
    temp->next=list2;
    printf("\nConcatenated Linked List is:");
    display(list1);
    getch();
}