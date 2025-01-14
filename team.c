#include<stdio.h>
int main()
{
    int t,b,c,d,count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d",&b,&c,&d);
        if((b+c+d)>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
