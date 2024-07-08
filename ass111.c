#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],i,n,key,cnt=0;
   clrscr();
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("\n Enter n numbers:");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   printf("\nEnter Number to search=");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
      if(a[i]==key)
        cnt++;
   }
   printf("\n%d Occurs %d time",key,cnt);
   getch();
   return 0;
}