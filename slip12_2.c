#include<stdio.h>
#include<conio.h>
void select_sort(int a[ ],int n)
{
    int i,j,temp,temp1;
    for(i=0;i<n;i++)
    {
       temp=a[i];
       for(j=i+1;j<n;j++)
       {
          if(a[j]<temp)
          {
             temp1=temp;
             temp=a[j];
             a[j]=temp1;
          }
       }
       a[i]=temp;
    }
}
void main()
{
    int a[20],n,i;
    clrscr();
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("\nEnter unsorted data:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    select_sort(a,n);
    printf("\nSorted data is:");
    for(i=0;i<n;i++)
       printf("\t%d",a[i]);
    getch();
}