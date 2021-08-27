#include<stdio.h>
int main()
{
    int i,s=0;
    i=1;
    do
    {
        s=s+i;
        printf("%d\n",i);
        i++;
    }
    while(i<=100);

        printf("%d\n",s);
    return 0;
}

