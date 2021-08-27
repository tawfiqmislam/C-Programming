#include<stdio.h>
void equation(int a,int b)
{
    int res;
    res = ((a+b)<3)?((a<3)?(a*a):(b*b)):(((b-a)>1)?(a-b):(a+b));
    printf("%d",res);
}
int main()
{
    int m,n;
    printf("Enter value for a and b:");
    scanf("%d %d",&m,&n);
    equation(m,n);
    return 0;
}
