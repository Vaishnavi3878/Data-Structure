#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],i,n;
   clrscr();
   printf("\nEnter Limit:");
   scanf("%d",&n);
   printf("\nEnter polynomial:");
   for(i=0;i<=n;++)
   {
      scanf("%d",&[i]);
   }
   printf("\nDisplay:");
   for(i=0;i<=n;i++)
   {
      printf("%dx^%d+",a[i],i);
   }
   getch();
   return 0;
}
      
   