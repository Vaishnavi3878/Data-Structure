#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n)
{
   int temp,i,j;
   for(i=1;i<n;i++)
   {
     temp=a[i];
     for(j=i-1;j>=0&&a[j]>temp;j--)
     {
        a[j+1]=a[j];
     }
     a[j+1]=temp;
    }
 }
int main()
{
   int a[20],i,n;
   clrscr();
   printf("\n Enter size of array:");
   scanf("%d",&n);
   printf("\nEnter unsorted data:");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   insertion_sort(a,n);
   printf("\n sorted data is:\n");
   for(i=0;i<n;i++)
     printf("\t%d",a[i]);
   getch();
   return 0;
}