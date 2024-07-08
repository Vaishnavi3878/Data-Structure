#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n)
{
   int i,temp,pass;
   for(pass=1;pass<n;pass++)
   {
     for(i=0;i<n-pass;i++)
     {
        if(a[i]>a[i+1])
        {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
        }
      }
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
   bubble_sort(a,n);
   printf("\n sorted data is:\n");
   for(i=0;i<n;i++)
     printf("\t%d",a[i]);
   getch();
   return 0;
}