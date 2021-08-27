#include<stdio.h>
int main()
{
    long long int total,k,t,i;
    char str1[50];
    while(scanf("%lld",&t)==1);
    {
        total=0;
        for(i=1;i<=t;i++)
        {
            scanf("%s",&str1);
            if(strcmp(str1,"donate")==0)
            {
                scanf("%lld",&k);
                total+=k;
            }
            else
                printf("%lld\n",total);
        }
    }
    return 0;
}
