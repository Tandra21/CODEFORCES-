#include<stdio.h>
#include<string.h>
int main()
{
    char t[100];
    gets(t);
    int l=strlen(t);
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-1-i;j++)
        {
            if(t[j]!='+')
            {
                if(t[j]>t[j+2])
                {
                    char r=t[j];
                    t[j]=t[j+2];
                    t[j+2]=r;
                }
            }
        }
    }
    printf("%s",t);
    return 0;
}
