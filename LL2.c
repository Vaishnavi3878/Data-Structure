#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
struct node
{
   int data;
   struct node *next;
};
struct node *create(struct node *head)
{
   int i,n;
   struct node *newnode,*temp;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("Enter value:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(head==NULL)
      {
         head=temp=newnode;
      }
      else
      {
         temp->next=newnode;
         temp=newnode;
      }
    } 
    return head;
}
void disp(struct node *head)
{
   struct node *temp=head;
   while(temp!=NULL)
   {
      printf("%d\t",temp->data);
      temp=temp->next;
   }
}
struct node *insertbeg(struct node *head,int num)
{
   struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=head;
   head=newnode;
   return head;
}
struct node *insertend(struct node *head,int num)
{
   struct node *newnode,*temp;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   for(temp=head;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return head;
}
int main()
{
   int ch,num;
   struct node *head=NULL;
   clrscr();
   do
   {
     printf("\n1-Create \n2-Display \n3-Insert Beginning \n4-Insert End");
     printf("\nEnter Choice:");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:head=create(head);  
               break;
        case 2:disp(head);
               break;
        case 3:printf("\nEnter Number:");
               scanf("%d",&num);
               head=insertbeg(head,num);
               break;
        case 4:printf("\nEnter Number:");
               scanf("%d",&num);
               head=insertend(head,num);
               break;
        default:printf("\nInvalid Choice....");
      }
    }while(ch<5);
    getch();
}