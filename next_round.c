#include<stdio.h>
int main()
{
    int t,r,n=0;
    scanf("%d %d",&t,&r);
    int ar[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<t;i++)
    {
        if(ar[i]>=ar[r-1]&&ar[i]>0) n++;
    }
    printf("%d",n);
    return 0;
}
