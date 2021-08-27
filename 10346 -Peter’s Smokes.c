#include<stdio.h>
int main()
{
int have,n,k;
while(scanf("%d %d",&n,&k)==2 && k>1)
{
have=n;
while(n>=k)
{
have= have+n/k;
n=(n/k)+(n%k);
}
printf("%d\n",have);
}
return 0;
}
