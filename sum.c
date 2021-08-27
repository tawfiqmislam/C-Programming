#include<stdio.h>
void main()
{
    double a,b,sum;
    printf("Enter a number: ");
    scanf("%lf",&a);
    printf("\nEnter another number: ");
    scanf("%lf",&b);
    sum=a+b;
    printf("sum is %.2f",sum);
    getch();
}
