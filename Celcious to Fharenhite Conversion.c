#include<stdio.h>
float x(float c)
{
    float k,f;
    printf("Enter temperature in Celcious: ");

    f=((9*c)/5)+32;
    k=f;
    return (k);
}

int main()
{
    float a,c;
    scanf("%f",&c);
    a=x(c);
    printf("temperature in Farenhite : %f",a);
    return 0;
}
