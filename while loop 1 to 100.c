#include<stdio.h>
int main()
{
    long long int i,s=0;
    i=1;
    while(i<=50000000)
    {
        s=s+i;
        printf("%lld\n",i);
        i++;
    }
    printf("%lld\n",s);
    return 0;
}
