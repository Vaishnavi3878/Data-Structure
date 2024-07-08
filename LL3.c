#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{ 
   int data;
   struct node *next;
};
struct node *create(struct node *head)
{
   struct node *newnode,*temp;
   int i,n;
   printf("Enter Limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("Enter Value:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      if(head==NULL)
      head=temp=newnode;
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
   printf("\n");
   while(temp!=NULL)
   {
     printf("%d\t",temp->data);
     temp=temp->next;
   }
}
struct node *insertBeg(struct node *head,int num)
{
   struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=head;
   head=newnode;
   return head;
}
struct node *insertEnd(struct node *head,int num)
{
   struct node *newnode,*temp;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   newnode->next=NULL;
   for(temp=head;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return head;
}
struct node *insertMid(struct node *head,int pos,int num)
{
   int i;
   struct node *newnode,*temp;
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->data=num;
   for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
   temp->next=newnode;
   return head;
}
struct node *delBeg(struct node *head)
{
   struct node *temp;
   temp=head;
   head=head->next;
   free(temp);
   return head;
}
struct node *delEnd(struct node *head)
{
   struct node *temp,*temp1;
   for(temp=head;temp->next->next!=NULL;temp=temp->next);
   temp1=temp->next;
   temp->next=NULL;
   free(temp1);
   return head;
}
struct node *delMid(struct node *head,int pos)
{
   int i;
   struct node *temp,*temp1;
   for(i=1,temp=head;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
   temp1=temp->next;
   temp->next=temp1->next;
   free(temp1);
   return head;
}
int main()
{
   int num,pos,ch;
   struct node *head=NULL;
   clrscr();
   do
   {
      printf("\n\n1-Create");
      printf("\n2-Display");
      printf("\n3-Insert Beginning");
      printf("\n4-Insert End");
      printf("\n5-Insert Middle");
      printf("\n6-Delete Beginning");
      printf("\n7-Delete End");
      printf("\n8-Delete Middle");
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
                head=insertBeg(head,num);
                break;
         case 4:printf("\nEnter Number:");
                scanf("%d",&num);
                head=insertEnd(head,num);
                break;
         case 5:printf("\nEnter Number:");
                scanf("%d",&num);
                printf("\nEnter Position:");
                scanf("%d",&pos);
                head=insertMid(head,pos,num);
                break;
         case 6:head=delBeg(head);
                break;
         case 7:head=delEnd(head);
                break;
         case 8:printf("\nEnter Position:");
                scanf("%d",&pos);
                head=delMid(head,pos);
                break;
         default:printf("\nInvalid Choice.....");
         }
    }while(ch<9);
    getch();
}