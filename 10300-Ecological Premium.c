#include<stdio.h>
int main()
{
    int n,f;
    long int a,b,c,d,x=0;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            x=0;
            scanf("%d",&f);
            while(f--)
            {
                scanf("%ld %ld %ld",&a,&b,&c);
                d=a*c;
                x=x+d;
            }
            printf("%ld\n",x);
        }
    }
    return 0;
}
