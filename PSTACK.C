#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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
   NODE *temp;
   char s[20];
   int i,j,flag=0,len;
   clrscr();
   init();
   printf("\nEnter String:");
   scanf("%s",&s);
   len=strlen(s);
   for(i=0;i<len;i++)
       push(s[i]);
   disp();
   for(i=0;i<len;i++)
   {
      for(j=len,temp=top;j>0&&temp!=NULL;j--,temp=temp->data)
      {
         if(s[i]!=temp->data)
         {
            flag=1;
            break;
         }
      }
   }
   if(flag==0)
      printf("\nString is palindrome.....");
   else
      printf("\nstring is not palindrome.....");
   getch();
}