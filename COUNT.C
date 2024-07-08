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
   int n,i;
   printf("\n Enter how many nodes:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      newnode->next=NULL;
      printf("\nEnter node data:");
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
   printf("\nLinked List:\n");
   for(temp=list;temp!=NULL;temp=temp->next)
      printf("\t%d",temp->data);
}
int count(NODE *list)
{
   NODE *temp;
   int cnt=0;
   for(temp=list;temp!=NULL;temp=temp->next)
      cnt++;
   return cnt;
}
int main()
{
   NODE *list=NULL;
   int cnt;
   clrscr();
   list=create(list);
   display(list);
   cnt=count(list);
   printf("\nTotal Nodes count=%d",cnt);
   getch();
   return 0;
}