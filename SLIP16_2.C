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
NODE *search(NODE *list,int num)
{
    NODE *temp=list;
    int i=1,flag=0;
    while(temp!=NULL)
    {
       if(temp->data==num)
       {
          flag=1;
          break;
       }
       i++;
       temp=temp->next; 
    }
    if(flag==0)
       return 0;
    else 
       return i;
}
void main()
{
    NODE *list=NULL;
    int num,i;
    clrscr();
    list=create(list);
    printf("\nLinked List:");
    display(list);
    printf("\nEnter number to search:");
    scanf("%d",&num);
    i=search(list,num);
    if(i==0)
      printf("\nNumber is not found.....");
    else
      printf("\nNumber is found at %d position",i);
    getch();
}
