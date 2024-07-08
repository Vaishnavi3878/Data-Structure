#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
  int data;
  struct node *next;
}NODE;
int create(NODE *list)
{
   NODE *temp,*newnode;
   int i,n;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     newnode=(NODE *)malloc(sizeof(NODE));
     printf("Enter node data:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
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
void disp(NODE *list)
{
   NODE *temp;
   printf("\nLinked List:\n");
   for(temp=list;temp!=NULL;temp=temp->next)
      printf("%d\t",temp->data);
}   
int main()
{
    int i;
    NODE *list=NULL,temp;
    clrscr();
    list=create(list);
    disp(list);
    getch();
    return 0;
}

    