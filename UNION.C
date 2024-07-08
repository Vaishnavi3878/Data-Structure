#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
   int data;
   struct node *next;
}NODE;
NODE *create(NODE *list)
{
  NODE *newnode,*temp;
  int i,n;
  printf("Enter how many nodes:");
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
void disp(NODE *list)
{
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
      printf("%d\t",temp->data);
   }
}
int main()
{
   NODE *list1=NULL,*list2=NULL,*temp1,*temp2;
   int ch;
   clrscr();
   list1=create(list1);
   list2=create(list2);
   printf("\nunion:\n");
   disp(list1);
   for(temp1=list1;temp1!=NULL;temp1=temp1->next)
   {
   for(temp2=list2;temp2!=NULL;temp2=temp2->next)
   {
   if(temp2->data!=temp1->data)
   break;
   }
   printf("%d\t",temp2->data);
   }
   getch();
   return 0;
}
      