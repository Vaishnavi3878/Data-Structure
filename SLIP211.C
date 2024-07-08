#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
typedef struct stack
{
   int items[MAX];
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
        printf("\nStack is Full....");
        return;
    }
    else
    {
        ps->top++;
        ps->items[ps->top]=ch;
    }
}
void printStack(STACK *ps)
{
    int i;
    if(isEmpty(ps))
       printf("\nStack is Empty....");
    else
    {
        for(i=ps->top;i>=0;i--)
           printf("\n\t%c",ps->items[i]);
    }
}
int main()
{
    int i,n,ch,x;
    char s[100];
    STACK s1;
    clrscr();
    initStack(&s1);
    printf("\nEnter String:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        push(&s1,s[i]);
    }
    printStack(&s1);
    getch();
    return 0;
}