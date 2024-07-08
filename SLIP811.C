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
NODE *search(NODE *root,int key)
{
   NODE *temp=root;
   while(temp!=NULL)
   {
      if(temp->data==key)
      {
         printf("\nElement is found...");
         return temp;
      }
      if(key<temp->data)
         temp=temp->left;
      else
         temp=temp->right;
    }     
    return NULL;
}
void main()
{
   NODE *root=NULL,*key;
   int ch,n;
   clrscr();
   do
   {
       printf("\n1-Create \n2-Display \n3-Search \n4-Exit \nEnter choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:root=createBst(root);
                  break;
           case 2:inorder(root);
                  break;
           case 3:printf("\nEnter key to search:");
                  scanf("%d",&n);
                  key=search(root,n);
                  printf("\nFound key is: %d",key->data);
                  break;
       }
    }while(ch<4);
    getch();
}