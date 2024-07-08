#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *create(NODE *list)
{
    NODE *temp,*newnode;
    int i,n;
    printf("\nEnter how many nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->next=NULL;
        printf("\nEnter the node data:");
        scanf("%d",&newnode->data);
        if(list==NULL)
           list=temp=newnode;
        else
        {
           temp->next=newnode;
           temp=newnode;
        }
    }
    return list;
}
void display(NODE *list)
{
   NODE *temp;
   for(temp=list;temp!=NULL;temp=temp->next)
   {
       printf("%d\t",temp->data);
   }
}
NODE *insertEnd(NODE *list,int num)
{
    NODE *temp,*newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->data=num;
    newnode->next=NULL;
    for(temp=list;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return list;
}
NODE *delete(NODE *list,int pos)
{
   NODE *temp=list,*temp1;
   int i;
   if(pos==1)
   {
       list=temp->next;
       free(temp);
   }
   else
   {
       for(temp=list,i=1;temp!=NULL&&i<pos-1;temp=temp->next,i++);
       if(temp==NULL)
       {
           printf("\nPosition is out of range....");
           return list;
       }
       temp1=temp->next;      
       temp->next=temp1->next;
       free(temp1);
   }
   return list;
}
void main()
{
   NODE *list=NULL;
   int n,ch,pos;
   clrscr();
   do
   {
       printf("\n1-Create \n2-Display \n3-Insert at End \n4-Delete \n5-Exit \nEnter choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:list=create(list);
                  break;
           case 2:printf("\nLinked List:");
                  display(list);
                  break;
           case 3:printf("\nEnter number to insert:");
                  scanf("%d",&n);
                  list=insertEnd(list,n);
                  break;
           case 4:printf("\nEnter position to delete node:");
                  scanf("%d",&pos);
                  list=delete(list,pos);
                  break;
         }
     }while(ch<5);
     getch();
}