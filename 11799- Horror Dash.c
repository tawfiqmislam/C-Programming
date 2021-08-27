#include<stdio.h>
int main()
{
    int T,kase;
    while (scanf("%d",&T)==1)
    {
        kase=0;
        while (T--)
        {
            long int c,N,i,max=0;
            scanf("%ld",&N);
            for (i=0;i<N;i++)
            {
                scanf("%ld",&c);
                if (c>max)
                    max=c;
            }
            kase++;
            printf("Case %d: %ld\n",kase,max);
        }
    }
    return 0;
}
