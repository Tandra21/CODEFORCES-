#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
   int t;
   scanf("%s",a);
   scanf("%s",b);
   for(int i=0;a[i]!=0;i++)
   {
       a[i]=toupper(a[i]);
   }
   for(int i=0;b[i]!=0;i++)
   {
       b[i]=toupper(b[i]);
   }
   t=strcmp(a,b);
   printf("%d",t);
   return 0;
}
