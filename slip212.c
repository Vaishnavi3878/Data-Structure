#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev,*next;
}DNODE;
DNODE * createList(DNODE *list)
{
    DNODE *temp,*newnode;
    int n,i;
    printf("\nEnter How Many Nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(DNODE *)malloc(sizeof(DNODE));
        printf("\nEnter Node data:");
        scanf("%d",&newnode->data);
        newnode->prev=newnode->next=NULL;
        if(list==NULL)
        {
           list=temp=newnode;
           newnode->prev=newnode->next=list;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=list;
            list->prev=newnode;
            temp=newnode;
        }
     }
     return list;
}
void display(DNODE *list)
{
    DNODE *temp;
    do
    {
       if(temp!=NULL)
          printf("\t%d",temp->data);
       temp=temp->next;
    }while(temp!=list);
}
void main()
{
    DNODE *list=NULL;
    clrscr();
    list=createList(list);
    display(list);
    getch();
}
            
    