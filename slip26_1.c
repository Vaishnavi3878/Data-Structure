#include<stdio.h>
#include<conio.h>
#include<string.h>
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
void push(STACK *ps,char ch)
{
    if(isFull(ps))
    {
       printf("\nStack is full.........");
       return;
    }
    else
    {
       ps->top++;
       ps->items[ps->top]=ch;
    }
}
char pop(STACK *ps)
{
   char ch;
   if(isEmpty(ps))
      printf("\nStack is Empty......");
   else
   {
      ch=ps->items[ps->top];
      ps->top--;
   }
   return ch;
}
void main()
{
   int i,j=0,len;
   char infix[MAX],prefix[MAX],ch;
   STACK s1;
   clrscr();
   initStack(&s1);
   printf("\nEnter Infix Expression:");
   scanf("%s",infix);
   len=strlen(infix);
   for(i=len-1;i>=0;i--)
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
                   prefix[j]=infix[i];
                   j++;
                   break;
          case '+':
          case '-':
          case '*':
          case '/':
          case ')':
                    push(&s1,infix[i]);
                    break;
          case '(':
                    while((ch=pop(&s1))!=')')
                    {
                       prefix[j]=ch;
                       j++;
                    }
                    break;
       }
    }
    while(!isEmpty(&s1))
    {
        prefix[j]=pop(&s1);
        j++;
    }
    strcpy(prefix,strrev(prefix));
    prefix[j]='\0';
    printf("\nThe Resulting Prefix string is : %s",prefix);
    getch();
}
          
      