#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[ ],int n)
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
void main()
{
    int a[2],i,n;
    clrscr();
    printf("\nEnter size of Array:");
    scanf("%d",&n);
    printf("Enter the unsorted data:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("\nsorted data is:");
    for(i=0;i<n;i++)
       printf("\t%d",a[i]);
    getch();
}