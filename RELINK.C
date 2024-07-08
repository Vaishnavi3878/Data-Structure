#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
  int data;
  struct node *next;
}NODE;
int create(NODE *list)
{
   NODE *temp,*newnode;
   int i,n;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     newnode=(NODE *)malloc(sizeof(NODE));
     printf("Enter node data:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(list==NULL)
     {
        list=temp=newnode;
     }
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

NODE *reLink(NODE *list,int pos)
{
   NODE *temp,*temp1,*temp2,*list1;
   int i;
   temp1=list;
   for(temp=list,i=1;temp!=NULL,i<pos;temp=temp->next);
   for(temp2=list;temp2->next!=NULL;temp2=temp2->next);
   list1=temp->next;
   temp->next=NULL;
   temp2->next=temp1;
   return list1;
}
int main()
{
   NODE *list=NULL,*list2=NULL;
   int pos;
   clrscr();
   list=create(list);
   printf("\nOriginal Linked List:\n");
   disp(list);
   printf("\nEnter position:");
   scanf("%d",&pos);
   disp(list);
   list2=reLink(list,pos);
   printf("After relink Linked List:\n");
   disp(list2);
   getch();
   return 0;
}