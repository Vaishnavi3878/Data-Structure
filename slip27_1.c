#include<stdio.h>
#include<conio.h>
#define MAX 20
typedef struct queue
{
   int item[MAX];
   int front,rear;
}QUEUE;
void initQueue(QUEUE *pq)
{
   pq->front=pq->rear=-1;
}
int isEmpty(QUEUE *pq)
{  
   if(pq->front==-1&&pq->rear==-1)
      return 1;
   else
      return 0;
}
int isFull(QUEUE *pq)
{
   if((pq->rear+1)%MAX==pq->front)
      return 1;
   else
      return 0;
}
void insert(QUEUE *pq,int num)
{
   if(isFull(pq))
      printf("\nQUEUE is full...........");
   else
   {
      if(isEmpty(pq))
      {
         pq->front++;
         pq->rear++;
         pq->item[pq->rear]=num;
      }
      else
      {
         pq->rear=(pq->rear+1)%MAX;
         pq->item[pq->rear]=num;
      }
    }
}
int delete(QUEUE *pq)
{
   int t;
   if(isEmpty)
      printf("\nQueue is Empty.....");
   else
   {
      if(pq->front==pq->rear)
      {
         t=pq->item[pq->front];
         pq->front=-1;
         pq->rear=-1;
      }
      else
      {
         t=pq->item[pq->front];
         pq->front=(pq->front+1)%MAX;
      }
   }
   return t;
}
void printQueue(QUEUE *pq)
{
   int i;
   i=pq->front;
   while(i!=pq->rear);
   {
      printf("\t%d",pq->item[i]);
      i=(i+1)%MAX;
   }
   printf("\t%d",pq->item[i]);
}
void main()
{
   QUEUE q;
   int ch,num,n;
   clrscr();
   initQueue(&q);
   do
   {
      printf("\n1-insert \n2-delete \n3-display \n4-Exit");
      printf("\n---------------------------------------------------");
      printf("\nEnter your choice:");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:printf("\nEnter number to insert in queue:");
                scanf("%d",&num);
                insert(&q,num);
                break;
         case 2:n=delete(&q);
                printf("\nDeleted element is %d",n);
                break;
         case 3:printQueue(&q);
                break;
      }
   }while(ch<4);
   getch();
} 