#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],i,n,key1,key2,cnt=0;
   clrscr();
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("\n Enter n numbers:");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   printf("\noriginal array=");
   for(i=0;i<n;i++)
     printf("%d\t",a[i]);
   printf("\nEnter Number to search=");
   scanf("%d",&key1);
   printf("\nEnter Number to replace=");
   scanf("%d",&key2);
   for(i=0;i<n;i++)
   {
      if(a[i]==key1)
        a[i]=key2;
   }
   printf("\nreplaced array=");
   for(i=0;i<n;i++)
     printf("%d\t",a[i]);
   getch();
   return 0;
}