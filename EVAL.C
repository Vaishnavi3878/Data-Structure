#include<conio.h>
#include<ctype.h>
#include"stack.h"
int main()
{
char s1[100];
int ch=65,c=65;
int val1,val2,res,i,n;
printf("Enter postfix expression:");
gets(s1);
printf("Enter Number of variables:");
scanf("%d",&n);
printf("\nEnter values of Operand:");
for(i=0;i<=n;i++)
{
scanf("%d",&ch);
ch++;
}
for(i=0;s1[i]!='\0';i++)
{
if(isalpha(s1[i]))
{
switch(s1[i])
{
for(i=0;i<=n;i++)
{
case c : push(c);
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
case '^':res=val2^val1;
	 break;
}
push(res);
}
}
printf("Result=%d",pop());
}

