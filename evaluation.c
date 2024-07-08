#include<conio.h>
#include<ctype.h>
#include"stack.h"
int main()
{
char s1[100],postfix[100],ch='A',c='A';
int val1,val2,res,i,j=0;
printf("Enter postfix expression:");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
if(isalpha(s1[i])
postfix[j++]=s1[i];
}
printf("\n%s values",postfix);
for(i=0;postfix[i]!='\0';i++)
{
scanf("%d",ch);
ch++;
}
for(i=0;s[i]!='\0';i++)
{
if(isalpha(s1[i])
{
switch(s1[i])
{
for(i=0;postfix[i]!='\0';i++)
{
case postfix[i]:push(c);
                c++;
                break;
}
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
case '$':res=val2$val1;
         break;
case '^':res=val2^val1;
         break;
}
push(res);
}
}
printf("Result=%d",pop());
}

