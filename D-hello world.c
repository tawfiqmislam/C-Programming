#include<stdio.h>
int main()
{
    long long int n,t;
    scanf("%lld",&n);
    t= n*(n+1)/2;
    t-=n-1;
    printf("%lld",t);
    return 0;
}
