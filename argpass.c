#include<stdio.h>
void add(int c,int d,int e)
{
    printf("%d %d %d",c,d,e);
}
void main()
{
    int x;
    scanf("%d",&x);
    add(x,++x,++x);
}
