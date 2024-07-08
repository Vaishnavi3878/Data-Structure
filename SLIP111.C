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
    printf("How many nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       newnode=(NODE *)malloc(sizeof(NODE));
       newnode->left=newnode->right=NULL;
       printf("Enter the element to be inserted:");
       scanf("%d",&newnode->data);
       if(root==NULL)
       root=newnode;
       else
       {
          temp=root;
          while(1)
          {
             if(newnode->data<temp->data)
               if(temp->left==NULL)
               {
                  temp->left=newnode;
                  break;
               }
               else
                  temp=temp->left;
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
NODE *insertBst(NODE *root,int n)
{
    NODE *temp,*newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    newnode->data=n;
    newnode->left=newnode->right=NULL;
    if(root==NULL)
       root=newnode;
    else
    {
       temp=root;
       while(temp!=NULL)
       {
          if(n<temp->data)
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
void main()
{
   NODE *root=NULL;
   int ch,n;
   clrscr();
   root=createBst(root);
   do
   {
      printf("\n1-insert \n2-display \n3-Exit");
      printf("\nEnter choice:\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:printf("\nEnter the element to be inserted:");
                 scanf("%d",&n);
                 root=insertBst(root,n);
                 break;
          case 2:inorder(root);
                 break;
       }
    }while(ch<3);
    getch(); 
}            
