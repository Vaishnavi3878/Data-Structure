#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],i,n;
   clrscr();
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("\n Enter polynomial");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   printf("\nDisplay=");
   for(i=0;i<n;i++)
     printf("%dx^%d+",a[i],i);
   getch();
   return 0;
}