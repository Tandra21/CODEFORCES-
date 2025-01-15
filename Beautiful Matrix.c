#include<stdio.h>
int main()
{
    int a[5][5],n,r;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                n=abs(2-i);
                r=abs(2-j);
            }
        }

    }
    printf("%d",n+r);
    return 0;
}
