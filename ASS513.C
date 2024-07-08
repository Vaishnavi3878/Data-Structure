#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node 
{
   int data;
   struct node *next,*prev;
}NODE;
NODE *create(NODE *list)
{
   NODE *temp,*newnode;
   int n,i;
   printf("Enter how many nodes:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      printf("\nEnter node data:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(list==NULL)
        temp=list=newnode;
      else
      {
         temp->next=newnode;
         newnode->prev=temp;
         temp=newnode;
      }
   }
   return list;
}
void disp(NODE *list)
{
  NODE *temp;
  printf("\n Linked list:\n");
  for(temp=list;temp!=NULL;temp=temp->next)
  {
     printf("%d\t",temp->data);
  }
}
int count(NODE *list)
{
  NODE *temp;
  int cnt=0;
  printf("\n Linked list:\n");
  for(temp=list;temp!=NULL;temp=temp->next)
  {
     cnt++;
  }
  return cnt;
}
NODE *insertbeg(NODE *list,int num)
{
   NODE *newnode;
   newnode=(NODE *)malloc(sizeof(NODE));
   newnode->data=num;
   newnode->next=list;
   list->prev=newnode;
   list=newnode;
   return list;
}
NODE *reverse(NODE *list,NODE *list1)
{
   NODE *newnode,*temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      newnode->data=temp->data;
      newnode->next=list1;
      list1->prev=newnode;
      list1=newnode;
   }
   return list1;
}
int main()
{
 NODE *list=NULL,*list1=NULL;
 int cnt=0,num,ch;
 clrscr();
 do
 {
   printf("\n1-Create\n2-Display\n3-Count\n4-Insert Begining\n5-reverse\n6-Exit");
   printf("\nEnter Choice:");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:list=create(list);
             break;
      case 2:disp(list);
             break;
      case 3:cnt=count(list);
             printf("\nTotal number of nodes=%d",cnt);
             break;
      case 4:printf("\nEnter number to insert begining:");
             scanf("%d",&num);
             list=insertbeg(list,num);
             break;
      case 5:list=reverse(list,list1);
             break;
    }
  }while(ch<6);
 getch();
 return 0;  
}