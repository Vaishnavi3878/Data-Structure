#include<stdio.h>
#include<conio.h>
#define max 100
struct stack
{
char a[max];
int top;
}s1;
void init()
{
s1.top=-1;
}
int isfull()
{
if(s1.top==max-1)
return 1;
else
return 0;
}
void push(char c)
{
if(isfull())
printf("\nStack is full don't push......");
else
{
s1.top++;
s1.a[s1.top]=c;
}
}
int main()
{
int i,j,flag=0;
char s[100];
clrscr();
printf("\nEnter string:");
scanf("%s",&s);
init();
for(i=0;s[i]!='\0';i++)
push(s[i]);
for(i=0;s[i]!='\0';i++)
{
for(j=s1.top;j>=0;j--)
{
if(s[i]!=s1.a[j])
{
flag=1;
break;
}
}
}
if(flag==0)
printf("\nString is Palindrome.....");
else
printf("\nString is not Palindrome...");
getch();
}
