#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   node *next;
}NODE;
NODE *create(NODE *list1)
{
   NODE *temp,*newnode;
   int i,n;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      printf("Enter the value:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(list1==NULL)
      list1=temp1=newnode;
      else
      {
         temp1->next=newnode;
         temp1=newnode;
      }
    }
    return list1;
}
void disp(NODE *list1)
{
  NODE *temp;
  for(temp=list1;temp!=NULL;temp=temp->next)
  {
     printf("%d\t",temp->data);
  }
}
NODE * positive(NODE *list1,NODE *list2)
{
   NODE *temp,*temp1;
   list2=temp1;
   for(temp=list1;temp!=NULL;temp=temp->next)
   {
      if(temp->data>0)
      {
        temp1->data=temp->data;
        temp1=temp1->next;
      }
    }
    return list2;
}
NODE * negative(NODE *list1,NODE *list3)
{
   NODE *temp,*temp1;
   list3=temp1;
   for(temp=list1;temp!=NULL;temp=temp->next)
   {
      if(temp->data<0)
      {
        temp1->data=temp->data;
        temp1=temp1->next;
      }
    }
    return list3;
}

