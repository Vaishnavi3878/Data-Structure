#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
int main()
{
   NODE *list=NULL,*temp,*newnode;
   int i,num,digit;
   printf("\nEnter any Number:");
   scanf("%d",&num);
   printf("\nEntered number is %d",num);
   while(num>0)
   {
       digit=num%10;
       newnode=(NODE *)malloc(sizeof(NODE));
       newnode->data=digit;
       newnode->next=NULL;
       if(list==NULL)
       {
          list=temp=newnode;
       }
       else
       {
          newnode->next=list;
          list=newnode;
       }
       num=num/10;
   }
   printf("\nLinked list:\n");
   temp=list;
   while(temp!=NULL)
   {
       printf("%d\t",temp->data);
       temp=temp->next;
   }
   getch();
   return 0;
}