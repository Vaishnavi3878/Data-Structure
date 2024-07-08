#include<stdio.h>
#include<ctype.h>
#define MAX 100
struct stack
{
  int a[MAX];
  int top;
}s;
void init()
{
  s.top=-1;
}
int isempty()
{
  if(s.top==-1)
    return 1;
  else
    return 0;
}
int isfull()
{
  if(s.top==MAX-1)
    return 1;
  else
    return 0;
}
void push(int num)
{
  if(isfull())
   printf("\nStack is full don't push......");
  else
   {
     s.top++;
     s.a[s.top]=num;
   }
}
int pop()
{
  char val;
  if(isempty())
    return 1;
  else
    {
      val=s.a[s.top];
      s.top--;
      return val;
    }
}
int main()
{
   char s1[100];
   int p,q,r,s,i,res,val1,val2;
   clrscr();
   printf("\nEnter Postfix expression:");
   scanf("%s",&s1);
   printf("\nEnter value of P Q R S:");
   scanf("%d%d%d%d",&p,&q,&r,&s);
   init();
   for(i=0;s1[i]!='\0';i++)
   {
      if(isalpha(s1[i]))
      {
         switch(s1[i])
         {
            case 'P':push(p);
                     break;
            case 'Q':push(q);
                     break;
            case 'R':push(r);
                     break;
            case 'S':push(s);
                     break;
          }
       }
       else
       {
          val1=pop();
          val2=pop();
          switch(s1[i])
          {
             case '+':res=val2+val1;
                      break;
             case '-':res=val2-val1;
                      break;
             case '*':res=val2*val1;
                      break;
             case '/':res=val2/val1;
                      break;
           }
           push(res);
        }
    }  
    printf("Result=%d",pop());
    getch();
}