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
NODE *swap(NODE *list,int m,int n)
{
   NODE *temp,*temp1;
   int i,temp2;
   for(temp=list,i=1;temp!=NULL,i<m-1;temp=temp->next,i++);
   for(temp1=list,i=1;temp1!=NULL,i<n-1;temp1=temp1->next,i++);
   temp2=temp->next->data;
   temp->next->data=temp1->next->data;
   temp1->next->data=temp2;
   return list;
}
void main()
{
   NODE *list=NULL;
   int m,n;
   clrscr();
   list=create(list);
   printf("\nOriginal Linked List:");
   display(list);
   printf("\nEnter mth position:");
   scanf("%d",&m);
   printf("\nEnter nth position:");
   scanf("%d",&n);
   list=swap(list,m,n);
   printf("\nAfter swap Linked list is:");
   display(list);
   getch();
}