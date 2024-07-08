#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,n,flag=0,key;
    clrscr();
    printf("\nEnter limit:");
    scanf("%d",&n);
    printf("\nEnter n elements:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("\nEnter value to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
       if(a[i]==key)
       {
          flag=1;
          break;
       }
    }
    if(flag==0)
       printf("\nValue is not present in array....");
    else
       printf("\nValue is present in array....");
    getch();
}