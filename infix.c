#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 20
typedef struct stack
{
   int top;
   char item[MAX];
}STACK;

void initstack(STACK *ps)
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
void push(STACK *ps, char ch)
{
  if(isFull(ps))
     printf("\n Stack is Full.....");
  else
    {
      ps->top++;
      ps->item[ps->top]=ch;
    }
}
char pop(STACK *ps)
{
  char ch;
  if(isEmpty(ps))
     printf("\n Stack is Empty....");
  else
  {
     ch=ps->item[ps->top];
     ps->top--;
  }
  return ch;
}

void main()
{
  int i,j=0;
  int len;
  char infix[MAX],prefix[MAX],ch;
  STACK s1; //opstack create
  clrscr();
  initstack(&s1);
  printf("\n Enter infix expression....");
  scanf("%s",infix);
  len=strlen(infix);
  for(i=len-1;i>=0;i--)// for loop from last character
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
    } //eof switch
  }//eof for
  while(!isEmpty(&s1))
  {
    prefix[j]=pop(&s1);
    j++;
  }
  strcpy(prefix,strrev(prefix));
  prefix[j]='\0';
  printf("\n The Resulting prefix string is %s",prefix);
  getch();
}