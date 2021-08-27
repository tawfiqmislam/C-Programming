#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("a\n");
        }
    }
    if(b>=a)
    {
        if(b>=c)
        {
            printf("b\n");
        }
    }
    if(c>=a)
    {
        if(c>=b)
        {
            printf("c\n");
        }
    }
    return 0;
}
