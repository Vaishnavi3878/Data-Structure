#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev,*next;
}DNODE;
DNODE *create(DNODE *list)
{
   DNODE *temp,*newnode;
   int i,n;
   printf("\nEnter how many nodes:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(DNODE *)malloc(sizeof(DNODE));
      newnode->prev=newnode->next=NULL;
      printf("\nEnter the node data:");
      scanf("%d",&newnode->data);
      if(list==NULL)
      {
        list=temp=newnode;
        newnode->next=newnode->prev=list;
      }
      else
      {
         temp->next=newnode;
         newnode->prev=temp;
         newnode->next=list;
         list->prev=newnode;
         temp=newnode;
      }
    }
    return list;
}
void disp_Odd(DNODE *list)
{
   DNODE *temp=list;
   do
   {
       if(temp!=NULL&&(temp->data)%2!=0)
          printf("\t%d",temp->data);
       temp=temp->next;
   }while(temp!=list);
}
void main()
{
   DNODE *list=NULL;
   clrscr();
   list=create(list);
   disp_Odd(list);
   getch();
}
          
   
   