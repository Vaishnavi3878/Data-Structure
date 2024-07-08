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
NODE *search(NODE *root,int key)
{
    NODE *temp=root;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("\nElement is found.....");
            return temp;
        }
        if(key<temp->data)
           temp=temp->left;
        else
           temp=temp->right;
     }
     return NULL;
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
    NODE *root=NULL,*key;
    int n;
    clrscr();
    root=createBst(root);
    printf("\nEnter key to search:");
    scanf("%d",&n);
    key=search(root,n);
    if(key->data==0)
      printf("\nElement is not found....");
    printf("\nTree is:\n");
    postorder(root);
    getch();
} 