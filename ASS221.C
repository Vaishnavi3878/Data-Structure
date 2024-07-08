#include<stdio.h>
#include<conio.h>
void insertion_sort(char day[20][20],int n)
{
   int i,j;
   char temp[20];
   for(i=0;i<n;i++)
   {
      strcpy(temp,day[i]);
      for(j=i-1;j>=0&&(strcmp(day[j],temp)>0);j--)
      { 
         strcpy(day[j+1],day[j]);
      }
      strcpy(day[j+1],temp);
   }
}
int main()
{
   char day[20][20];
   int n,i;
   clrscr();
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("\nEnter day of week:");
   for(i=0;i<n;i++)
     scanf("%s",day[i]);
   insertion_sort(day,n);
   printf("\n sorted data is:\n");
   for(i=0;i<n;i++)
     printf("\n%s",day[i]);
   getch();
   return 0;
}