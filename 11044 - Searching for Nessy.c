#include<stdio.h>

int main()
{
    int t,n,m,s,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d%d",&n,&m);
            s=(n/3)*(m/3);
            printf("%d\n",s);
        }
    }
    return 0;
}
