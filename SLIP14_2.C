#include<stdio.h>
#include<conio.h>
#include<string.h>
void bubble_sort(char s[20][20],int n)
{
    int i,pass;
    char temp[20];
    for(pass=1;pass<n;pass++)
    {
       for(i=0;i<n-pass;i++)
       {
          if(strcmp(s[i],s[i+1])>0)
          {
              strcpy(temp,s[i]);
              strcpy(s[i],s[i+1]);
              strcpy(s[i+1],temp);
          }
        }
     }
}
void main()
{
    char s[20][20];
    int i,n;
    clrscr();
    printf("\nEnter limit:");
    scanf("%d",&n);
    printf("Enter n names:");
    for(i=0;i<n;i++)
       scanf("%s",&s[i]);
    bubble_sort(s,n);
    printf("\nSorted names are:");
    for(i=0;i<n;i++)
       printf("%s\t",s[i]);
    getch();
}