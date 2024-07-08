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
   NODE *temp,*newnode;
   int i,n;
   printf("\nEnter how many nodes:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   { 
       newnode=(NODE *)malloc(sizeof(NODE));
       newnode->left=newnode->right=NULL;
       printf("\nEnter node data:");
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

void inorder(NODE *root)
{
   if(root!=NULL)
   {
       inorder(root->left);
       printf("%d\t",root->data);
       inorder(root->right);
   }
}
void postorder(NODE *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("\t%d",root->data);
    }
}
void main()
{
    NODE *root=NULL;
    clrscr();
    root=createBst(root);
    printf("\nPreorder Traversal:\n");
    preorder(root);
    printf("\nINorder Traversal:\n");
    inorder(root);
    printf("\nPostorder Traversal:\n");
    postorder(root);
    getch();
}