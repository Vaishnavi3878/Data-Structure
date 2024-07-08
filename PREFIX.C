
#include<ctype.h>
#include<string.h>
#include"stack.h"
int main()
{
char infix[100],prefix[100],ch;
int i,j=0;
printf("Enter infix expression:");
gets(infix);
strrev(infix);
for(i=0;infix[i]!='\0';i++)
{
if(infix[i]=='(')
infix[i]=')';
else if(infix[i]==')')
infix[i]='(';
}
init();
for(i=0;infix[i]!='\0';i++)
{
if(isalpha(infix[i]))
prefix[j++]=infix[i];
else if(infix[i]=='(')
push(infix[i]);
else if(infix[i]==')')
{
while((ch=pop())!='(')
prefix[j++]=ch;
}
else
{
while(priority(s.a[s.top])>=priority(infix[i]))
{
prefix[j++]=pop();
}
push(infix[i]);
}
}
while(!isempty())
{
prefix[j++]=pop();
}
prefix[j]='\0';
strrev(prefix);
printf("\nprefix string=%s",prefix);
getch();
}
