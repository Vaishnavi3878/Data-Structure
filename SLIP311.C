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
       printf("\nEnter node data:");
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
void disp(NODE *list)
{
 NODE *temp=list;
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
}
NODE *insert(struct node *list,int num)
{
 NODE *temp,*newnode;
 newnode=(NODE *)malloc(sizeof(NODE));
 newnode->data=num;
 newnode->next=NULL;
 if(list==NULL)
 {
    list=newnode;
 }
 else
 {
    for(temp=list;temp->next!=NULL;temp=temp->next);
     temp->next=newnode;
  }
 return list;
}
NODE *union1(NODE *list1,NODE *list2)
{
 int flag;
 NODE *list3=NULL,*temp,*temp1,*temp2;
 for(temp=list1;temp!=NULL;temp=temp->next)
     list3=insert(list3,temp->data);
  for(temp1=list2;temp1!=NULL;temp1=temp1->next)
 {
   flag=0;
   for(temp2=list3;temp2!=NULL;temp2=temp2->next)
   if(temp1->data==temp2->data)
   {
     flag=1;
     break;
   }
   if(flag==0)
   list3=insert(list3,temp1->data);
  }
 return list3;
}
void main()
{
 NODE *list1=NULL,*list2=NULL,*list3=NULL;
 clrscr();
 list1=create(list1);
 list2=create(list2);
 printf("\n linklist");
 disp(list1);
 printf("\n linklist");
 disp(list2);
 list3=union1(list1,list2);
 printf("\n union list");
 disp(list3);
 getch();
}