#include<stdio.h>
#include<conio.h>
#include<string.h>
void bubble_sort(char s[100][100],int n)
{
   int i,pass;
   char temp[20];
   for(pass=1;pass<n;pass++)
   {
      for(i=0;i<n-pass;i++)
      {  if(strcmp(s[i],s[i+1])>0)
	 {
	 strcpy(temp,s[i]);
	 strcpy(s[i],s[i+1]);
	 strcpy(s[i+1],temp);
	 }
      }
   }
}
int main()
{
   int i,n;
   char s[100][100];
   clrscr();
   printf("Enter Limit:");
   scanf("%d",&n);
   printf("Enter names to sort:");
   for(i=0;i<n;i++)
   scanf("%s",&s[i]);
   bubble_sort(s,n);
   printf("\n sorted names are:");
   for(i=0;i<n;i++)
   printf("\t%s",s[i]);
   getch();
   return 0;
}


     