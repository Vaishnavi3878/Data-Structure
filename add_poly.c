#include<stdio.h>
#include<conio.h>
#include<math.h>
struct poly
{
    int coeff;
    int pow;
}p1[50],p2[50],p3[50];
int main()
{
   int i,n,m=0;
   clrscr();
   printf("\nEnter limit:");
   scanf("%d",&n);
   printf("\nEnter first poly:");
   for(i=0;i<n;i++)
   {
      printf("\nEnter coefficient:");
      scanf("%d",&p1[i].coeff);
      printf("\nEnter power:");
      scanf("%d",&p1[i].pow);
   }
   printf("\nEnter Second poly:");
   for(i=0;i<n;i++)
   {
      printf("\nEnter coefficient:");
      scanf("%d",&p2[i].coeff);
      printf("\nEnter power:");
      scanf("%d",&p2[i].pow);
   }
   printf("\nFirst poly:");
   for(i=0;i<n;i++)
   {
      printf("%dx^%d+",p1[i].coeff,p1[i].pow);
   }
   printf("\nSecond poly:");
   for(i=0;i<n;i++)
   {
      printf("%dx^%d+",p2[i].coeff,p2[i].pow);
   }
   for(i=0;i<n;i++)
   {
      if(p1[i].pow==p2[i].pow)
      {
         p3[m].coeff=p1[i].coeff+p2[i].coeff;
         p3[m].pow=p1[i].pow;
         m++;
      }
      else
      {
         if(p1[i].pow<p2[i].pow)
         {
            p3[m].coeff=p1[i].coeff;
            p3[m].pow=p1[i].pow;
            m++;
         }
         else
         {
            p3[m].coeff=p2[i].coeff;
            p3[m].pow=p2[i].pow;
            m++;
         }
      }
   }
   printf("\nAddition:");
   for(i=0;i<m;i++)
   {
      printf("%dx^%d+",p3[i].coeff,p3[i].pow);
   }
   getch();
   return 0;
}