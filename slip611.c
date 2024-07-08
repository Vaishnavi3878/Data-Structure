#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left,*right;
}NODE;
NODE *createBst(NODE *root)
{
   NODE *newnode,*temp;
   int i,n;
   printf("\nEnter how many nodes:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      newnode=(NODE *)malloc(sizeof(NODE));
      newnode->left=newnode->right=NULL;
      printf("\nEnter the element to be inserted:");
      scanf("%d",&newnode->data);
      if(root==NULL)
         root=newnode;
      else
      {
         temp=root;
         while(1)
         {
            if(newnode->data<temp->data)
            {
               if(temp->left==NULL)
               {
                  temp->left=newnode;
                  break;
               }
               else
                  temp=temp->left;
            }
            else
            {
               if(temp->right==NULL)
               {
                  temp->right=newnode;
                  break;
               }
               else
                  temp=temp->right;
            }
         }
      }
    }
    return root;
}
void preorder(NODE *root)
{
    if(root!=NULL)
    {
       printf("%d\t",root->data);
       preorder(root->left);
       preorder(root->right);
    }
}
void postorder(NODE *root)
{
    if(root!=NULL)
    {
       postorder(root->left);
       postorder(root->right);
       printf("%d\t",root->data);
    }
}
void main()
{
    NODE *root=NULL;
    int ch;
    clrscr();
    do
    {
        printf("\n1-create \n2-Preorder \n3-Postorder \n4-Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:root=createBst(root);
                   break;
            case 2:preorder(root);
                   break;
            case 3:postorder(root);
                   break;
         }
     }while(ch<4);
     getch();
}