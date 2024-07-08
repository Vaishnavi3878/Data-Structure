#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,n,flag=0;
    char s[20][20],c[20];
    clrscr();
    printf("\nEnter limit:");
    scanf("%d",&n);
    printf("\nEnter City names:");
    for(i=0;i<n;i++)
       scanf("%s",&s[i]);
    printf("\nEnter city name to search:");
    scanf("%s",&c);
    for(i=0;i<n;i++)
    {
       if(strcmp(s[i],c)==0)
       {
          flag=1;
          break;
       }
    }
    if(flag==0)
       printf("\nCity is not present in array....");
    else
       printf("\nCity is present in array....");
    getch();
}
