#include<stdio.h>
int main()
{
    int t,n,a,i,j,max,min;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            max=0,min=100;
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a);
                if(max<a)
                    max=a;
                if(min>a)
                    min=a;
            }
            printf("%d\n",(max-min)*2);
        }
    }
    return 0;
}
