#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
void main()
{
    NODE *list1=NULL,*list2=NULL,*temp1,*temp2,*newnode;
    int i,n;
    clrscr();
    printf("\nEnter limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->next=NULL;
        printf("\nEnter the node data:");
        scanf("%d",&newnode->data);
        if(newnode->data>0)
        {
            if(list1==NULL)
               list1=temp1=newnode;
            else
            {
               temp1->next=newnode;
               temp1=newnode;
            }
        }
        if(newnode->data<0)
        {
            if(list2==NULL)
               list2=temp2=newnode;
            else
            {
                temp2->next=newnode;
                temp2=newnode;
            }
         }
      }
      printf("\nPositive Numbers Linked List is:\n");
      for(temp1=list1;temp1!=NULL;temp1=temp1->next)
         printf("%d\t",temp1->data);
      printf("\nNegative Numbers Linked List is:\n");
      for(temp2=list2;temp2!=NULL;temp2=temp2->next)
         printf("%d\t",temp2->data);
      getch();
}