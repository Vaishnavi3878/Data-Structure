#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,n,flag=0,key,first,last,mid;
    clrscr();
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("\nEnter n elements:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("\nEnter value to search:");
    scanf("%d",&key);
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(key==a[mid])
        {
            printf("\nkey found at index %d",mid);
            break;
        }
        if(key<a[mid])
           last=mid-1;
        if(key>a[mid])
           first=mid+1;
    }
    if(first>last)
       printf("\nRecord not found......");
    getch();
}