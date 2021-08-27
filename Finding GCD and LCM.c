#include<stdio.h>
int main()
{
    int a,b,gcd,lcm,i;
    while(scanf("%d%d",&a,&b)==2){
        for(i=1;i<=a && i<=b; i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd = i;
            }
        }
        lcm = (a*b)/gcd;
        printf("%d\t%d\n",gcd,lcm);
    }
    return 0;
}
