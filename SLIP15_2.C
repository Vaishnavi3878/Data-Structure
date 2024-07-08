#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct stack
{
   int data;
   struct node *next;
}NODE;
NODE *initStack(NODE *stack)
{
   stack=NULL;
   return stack;
}
int isEmpty(NODE *stack)
{
   if(stack==NULL)
      return 1;
   else
      return 0;
}
NODE *push(NODE *stack,int num)
{
   NODE *newnode;
   newnode=(NODE *)malloc(sizeof(NODE));
   newnode->data=num;
   newnode->next=stack;
   stack=newnode;
   return stack;
}
NODE *pop(NODE *stack)
{
   int num;
   NODE *temp;
   num=stack->data;
   temp=stack;
   stack=temp->next;
   free(temp);
   printf("\nThe Popped element is %d",num);
   return stack;
   
}
void display(NODE *stack)
{
   NODE *temp=stack;
   while(temp!=NULL)
   {
      printf("\t%d",temp->data);
      temp=temp->next;
   }
}
void main()
{
   NODE *stack;
   int ch,n;
   clrscr();
   stack=initStack(stack);
   do
   {
       printf("\n1-PUSH \n2-POP \n3-DISPLAY \n4-EXIT");
       printf("\n------------------------------------------------------------------------");
       printf("\nEnter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
          case 1:printf("\nEnter element to push:");
                 scanf("%d",&n);
                 stack=push(stack,n);
                 break;
          case 2:if(isEmpty(stack))
                    printf("\nStack is Empty....");
                 else
                    stack=pop(stack);
                 break;
          case 3:display(stack);
                 break;
        }
     }while(ch<4);
     getch();
}
   