#include<stdio.h>
int main()
{
    char t[1000];
    gets(t);
    t[0]=toupper(t[0]);
    puts(t);
    return 0;
}
