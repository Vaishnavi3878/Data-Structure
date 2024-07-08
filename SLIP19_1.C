#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
   char data;
   struct node *next;
}NODE;
NODE *top;
void init()
{
   top=NULL;
}
void push(char num)
{
   NODE *newnode;
   newnode=(NODE *)malloc(sizeof(NODE));
   newnode->data=num;
   newnode->next=top;
   top=newnode;
}
void disp()
{
   NODE *temp;
   for(temp=top;temp!=NULL;temp=temp->next)
   {
      printf("%c",temp->data);
   }
}
int main()
{
   char s[20];
   int i;
   clrscr();
   init();
   printf("\nEnter String:");
   scanf("%s",&s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]==' ')
       {
          disp();
          init();
       }
       else
       {
	  push(s[i]);
       }
   }
   disp();
   getch();
}