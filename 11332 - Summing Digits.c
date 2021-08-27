#include<stdio.h>
int SumDgit(long int);
int main()
{
     long int n,value;
    while(scanf("%ld",&n)==1)
    {
            if(n==0)
                break;
           SumDgit(n);
    }
    return 0;
}

int SumDgit(long int n)
{
    long int sum,get;
    sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
        get=sum;
    }
    if(get/10==0)
        printf("%ld\n",get);
    else
        SumDgit(get);

}
