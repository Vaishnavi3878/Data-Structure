#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *create(NODE *list)
{
   NODE *temp,*newnode;
   int i,n;
   printf("\nEnter Limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      newnode->next=NULL;
      printf("\nEnter node data:");
      scanf("%d",&newnode->data);
      if(list==NULL)
      {
         list=temp=newnode;
         newnode->next=list;
      }
      else
      {
         temp->next=newnode;
         temp=newnode;
         newnode->next=list;
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
         printf("\t%d",temp->data);
      temp=temp->next;
   }while(temp!=list);
}
void main()
{
    NODE *list=NULL;
    clrscr();
    list=create(list);
    display(list);
    getch();
}