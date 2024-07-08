#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *createlist(NODE *list)
{
   NODE *newnode,*temp;
   int i,n;
   printf("\nEnter how many nodes:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
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
int count(NODE *list)
{
   NODE *temp;
   int cnt=0;
   for(temp=list;temp!=NULL;temp=temp->next)
      cnt++;
   return cnt;
}
void display(NODE *list)
{
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
      printf("\t%d",temp->data);
}
void main()
{
   NODE *list=NULL;
   int cnt=0;
   clrscr();
   list=createlist(list);
   cnt=count(list);
   printf("\nLinked List:\n");
   display(list);
   printf("\nTotal number of Nodes=%d",cnt);
   getch();
}