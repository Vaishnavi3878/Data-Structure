#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100
struct stack
{
   char a[MAX];
   int top;
}s1;
void init()
{
   s1.top=-1;
}
int isfull()
{
   if(s1.top==MAX-1)
      return 1;
   else 
      return 0;
}
void push(char c)
{
    if(isfull())
       printf("\nStack is full don't push...");
    else
    {
       s1.top++;
       s1.a[s1.top]=c;
    }
}
void disp()
{
   int i;
   for(i=s1.top;i>=0;i++)
       printf("%c\t",s1.a[i]);
}
void main()
{
    int i,j,flag=0;
    char s[20];
    clrscr();
    printf("Enter string:");
    gets(s);
    init();
    for(i=0;s[i]!='\0';i++)
        push(s[i]);
    for(i=0;s[i]!='\0';i++)
    {
       for(j=s1.top;j>=0;j--)
       {
          if(strcmp(s[i],s1.a[j])!=0)
          {
             flag=1;
             break;
          }
       }
    }
    if(flag==0)
       printf("\nstring is palindrome...");
    else
       printf("\nstring is not palindrome...");
    getch();
} 