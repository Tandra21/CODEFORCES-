#include<stdio.h>
#include<string.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    char x[1000];
    for(int i=0;i<a;i++)
    {
        scanf("%s",x);
        count=strlen(x);
        if(count>10)
        {
            printf("%c%d%c\n",x[0],count-2,x[count-1]);
        }
       else{ printf("%s\n",x);
       }
    }
    return 0;
}
