#include<stdio.h>
int main()
{
    int a,b,c,d;
    char a1='a';
    char b1='b';
    char c1='c';
    char d1;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            d=a;
            d1=a1;
        }
        else
        {
            d=c;
            d1=c1;
        }
    }
    else
    {
        if(b>c)
        {
            d=b;
            d1=b1;
        }
        else
        {
            d=c;
            d1=c1;
        }
    }
    printf("%c = %d large\n",d1,d);
    return 0;
}
