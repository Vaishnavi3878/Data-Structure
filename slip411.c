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
   for(i=1;i<=n;i++)
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
         printf("%d\t",root->data);
    }
}
void main()
{
    NODE *root=NULL;
    int ch;
    clrscr();
    root=createBst(root);
    do
    {
        printf("\n1-Inorder \n2-Postorder");
        printf("\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:inorder(root);
                   break;
            case 2:postorder(root);
                   break;
        }
     }while(ch<3);
     getch();
}