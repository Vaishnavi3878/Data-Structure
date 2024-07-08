#include<stdio.h>
#include<conio.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;

struct node *create(struct node *list)
{
 int i,n;
 struct node *temp,*newnode;
 printf("enter the limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->next=NULL;
  printf("enter the data");
  scanf("%d",&newnode->data);
  if(list==NULL)
  {
   list=temp=newnode;
  }
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
 }
 return list;
}

void disp(struct node *list)
{
 struct node *temp=list;
 while(temp!=NULL)
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }
}

struct node *insert(struct node *list,int pos)
{
 struct node *temp,*newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
 if(pos==1)
 {
   list=newnode;
 }
 else
 {
  for(temp=list;temp->next!=NULL;temp=temp->next)
  temp->next=newnode;
 }
 return list;
}

struct node *union1(struct node *list1,struct node *list2)
{
 int flag;
 NODE *list3,*temp,*temp1,*temp2;
 list3=NULL;
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
 struct node *list1=NULL,*list2=NULL,*list3=NULL;
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