#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node *next;
}NODE;
NODE *create(NODE *list1)
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
      if(list1==NULL)
        list1=temp=newnode;
      else
      {
         temp->next=newnode;
         temp=newnode;
      }
   }
   return list1;
}
void display(NODE *list1)
{
   NODE *temp;
   for(temp=list1;temp!=NULL;temp=temp->next)
      printf("\t%d",temp->data);
}
NODE *reverse(NODE *list1,NODE *list2)
{
   NODE *newnode,*temp;
   for(temp=list1;temp!=NULL;temp=temp->next)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      newnode->data=temp->data;
      newnode->next=list2;
      list2=newnode;
   }
   return list2;
}

int main()
{
   NODE *list1=NULL,*list2=NULL;
   int cnt;
   clrscr();
   list1=create(list1);
   printf("\nLinked List:\n");
   display(list1);
   printf("\nReverse Linked List:\n");
   list2=reverse(list1,list2);
   display(list2);
   getch();
   return 0;
}