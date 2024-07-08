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
void main()
{
   int i,j=0;
   char infix[MAX],postfix[MAX],ch;
   STACK s1;
   clrscr();
   initStack(&s1);
   printf("\nEnter INFIX string:");
   scanf("%s",&infix);
   for(i=0;infix[i]!='\0';i++)
   {
      switch(infix[i])
      {
          case 'a':
          case 'A':
          case 'b':
          case 'B':
          case 'c':
          case 'C':
          case 'd':
          case 'D':
          case 'e':
          case 'E':
                    postfix[j]=infix[i];
                    j++;
                    break;
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
                    push(&s1,infix[i]);
                    break;
          case ')':
                    while((ch=pop(&s1))!='(')
                    {
                       postfix[j]=ch;
                       j++;
                    }
                    break;
       }
    }
    while(!isEmpty(&s1))
    {
        postfix[j]=pop(&s1);
        j++;
    }
    postfix[j]='\0';
    printf("\nThe Postfix string is:%s",postfix);
    getch();
}      
    
          
          