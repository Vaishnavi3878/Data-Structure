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
NODE *concat(NODE *list1,NODE *list2)
{
   NODE *temp;
   if(list1==NULL)
     return list2;
   if(list2==NULL)
     return list1;
   for(temp=list1;temp->next!=NULL;temp=temp->next);
   temp->next=list2;  
   return list1;
}
int main()
{
   NODE *list1=NULL,*list2=NULL,*list3=NULL;
   int cnt;
   clrscr();
   list1=create(list1);
   list2=create(list2);
   printf("\nFirst Linked List:\n");
   display(list1);
   printf("\nSecond Linked List:\n");
   display(list2);
   printf("\nConcat list:\n");
   list3=concat(list1,list2);
   display(list3);
   getch();
   return 0;
}