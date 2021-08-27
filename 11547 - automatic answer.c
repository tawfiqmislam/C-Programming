#include<stdio.h>

int main()
{
    long int testcase, n,i,tens;
    while(scanf("%ld",&testcase)==1)
    {
        for(i=1;i<=testcase;i++)
        {
            scanf("%ld",&n);
            n=((((((n*567)/9)+7492)*235)/47)-498);
            if(n<0)
                n=n*-1;
            n=(n/10)%10;
            if(tens<0)
                tens*-1;
            printf("%ld\n",n);
        }
    }
    return 0;
}
