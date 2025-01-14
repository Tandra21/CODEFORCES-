#include<stdio.h>
int main()
{
    long long a,b,c,d,e,f;
    scanf("%lld%lld%lld",&a,&b,&c);
    d=((a+c)-1)/c;
    e=((b+c)-1)/c;
    f=d*e;
    printf("%lld",f);
    return 0;
}
