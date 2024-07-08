#include<stdio.h>
#include<conio.h>
#define MAX 20
struct stack
{
   char data[MAX];
   int top;
}s1;
void init()
{
   s1.top=-1;
}
int isEmpty()
{
   if(s1.top==-1)
     return 1;
   else 
     return 0;
}
int isFull()
{
   if(s1.top==MAX-1)
      return 1;
   else
      return 0;
}
void push(char ch)
{
    if(isFull(s1))
       printf("\nStack is Full.....");
    else
    {
	s1.top++;
	s1.data[s1.top]=ch;
    }
}
void display()
{
   int i;
   for(i=s1.top;i>=0;i++)
     printf("%c\t",s1.data[s1.top]);
}
void main()
{
   int i,len;
   char s;
   clrscr();
   init();
   printf("\nEnter any string");
   scanf("%s",&s);
   len=strlen(s);
   for(i=len-1;i>=0;i--)
   {
      push(s[i]);
   }
   display();
   getch();
}
