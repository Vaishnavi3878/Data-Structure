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
NODE *search(NODE *list,int key)
{
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       if(temp->data==key)
          return temp;
   }
   return NULL;
}
NODE *insertEnd(NODE *list,int num)
{
   NODE *temp,*newnode;
   newnode=(NODE *)malloc(sizeof(NODE));
   newnode->next=NULL;
   newnode->data=num;
   for(temp=list;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return list;
}
void main()
{
   NODE *list=NULL,*key;
   int ch,n1,n2;
   clrscr(); 
   do
   {
      printf("\n1-Create \n2-Display \n3-Search \n4-Insert End \n5-Exit \nEnter choice:");
      scanf("%d",&ch);
      switch(ch)
      {
           case 1:list=createlist(list);
                  break;
           case 2:disp(list);
                  break;
           case 3:printf("\nEnter key to search:");
                  scanf("%d",&n1);
                  key=search(list,n1);
                  if(key->data==0)
                     printf("\nkey is not found....");
                  else
                     printf("\nkey is found....");
                  break;
           case 4:printf("\nEnter number to insert at last position:");
                  scanf("%d",&n2);
                  list=insertEnd(list,n2);
                  break;
       }
    }while(ch<5);
    getch();
}
          