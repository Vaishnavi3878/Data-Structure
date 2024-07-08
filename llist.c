#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
int main()
{
	NODE *list=NULL,*temp,*newnode;
	int n,i,pass,temp1;
            clrscr();
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
	printf("\nunsorted list:\n");
	for(temp=list;temp!=NULL;temp=temp->next)
	printf("\t%d",temp->data);
	for(pass=1;pass<n;pass++)
	{
		for(i=0,temp=list;i<n-pass&&temp!=NULL;i++,temp=temp->next)
		{
			if(temp->data>temp->next->data)
			{
		        temp1=temp->data;
		        temp->data=temp->next->data;
		        temp->next->data=temp1;
		    }
		}
	}
	printf("\nsorted list:\n");
	for(temp=list;temp!=NULL;temp=temp->next)
	printf("\t%d",temp->data);
            getch();
            return 0;
}
