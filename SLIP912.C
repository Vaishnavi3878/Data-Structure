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
   NODE *temp,*newnode;
   int i,n;
   printf("\nEnter how many nodes:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      printf("\nEnter the node data:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
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
void disp(NODE *list)
{
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
       printf("%d\t",temp->data);
}
NODE *invert(NODE *list)
{
   NODE *t1,*t2,*t3;
   t1=list;
   t2=t1->next;
   t3=t2->next;
   t1->next=NULL;
   while(t3!=NULL)
   {
      t2->next=t1;
      t1=t2;
      t2=t3;
      t3=t3->next;
   }
   t2->next=t1;
   return t2;
}
void main()
{
   NODE *list1=NULL,*list2=NULL;
   clrscr();
   list1=createlist(list1);
   printf("\nOriginal Liked List:\n");
   disp(list1);
   list2=invert(list1);
   printf("\nReversed Liked List:\n"); 
   disp(list2);
   getch();
}  