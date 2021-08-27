#include<stdio.h>
int main()
{
    long long int n,age[2000005],i,j,m;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        m=0;
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&age[i]);
        }
        for(i=0; i<=110; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(age[j]==i && m<n-1)
                {
                    printf("%lld ",i);
                    m++;
                }
                else if(age[j]==i && m==n-1)
                {
                    printf("%lld\n",i);
                    m++;
                }
                if(m==n)
                    break;
            }
        }
    }
    return 0;
}
