#include<stdio.h>
int main()
{
    int num1,num2,sum,num3,num4,c;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    sum=add(num1,num2);
    printf("%d\n",sum);
    c=add(num3,num4);
    printf("%d",c);

}
int add(int a,int b)
{
    int add;
    add=a+b;
    return add;
}
