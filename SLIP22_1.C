#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
typedef struct stack
{
   char items[MAX];
   int top;
}STACK;
void initStack(STACK *ps)
{
   ps->top=-1;
}
int isEmpty(STACK *ps)
{
   if(ps->top==-1)
      return 1;
   else
      return 0;
}
int isFull(STACK *ps)
{
   if(ps->top==MAX-1)
      return 1;
   else
      return 0;
}
void push(STACK *ps,char n)
{
   if(isFull(ps))
   {
      printf("\nStack is full....");
      return;
   }
   else
   {
      ps->top++;
      ps->items[ps->top]=n;
   }
}
char pop(STACK *ps)
{
   char x;
   if(isEmpty(ps))
      printf("\nStack is empty...");
   else
   {
      x=ps->items[ps->top];
      ps->top--;
   }
   return x;
}
void disp(STACK *ps)
{
   int i;
   for(i=ps->top;i>=0;i--)
       printf("%c\t",ps->items[i]);
}
void main()
{
   int i,ocnt=0,ecnt=0;
   char infix[MAX],ch;
   STACK s1;
   clrscr();
   initStack(&s1);
   printf("\nEnter INFIX string:");
   scanf("%s",&infix);
   for(i=0;infix[i]!='\0';i++)
       push(&s1,infix[i]);
   for(i=0;infix[i]!='\0';i++)
   {
      ch=pop(&s1);
      if(ch=='(')
         ocnt++;
      if(ch==')')
         ecnt++;
   }
   if(ocnt==ecnt)
   {
      printf("\nExpression is parenthesized.......");
   }   
   else
   {
      printf("\nExpression is not parenthesized.......");
   }
   getch();
}  

