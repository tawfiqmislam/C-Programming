#include<stdio.h>
int main()
{
    float avg,v1,v2;
    printf("Enter v1:");
    scanf("%f",&v1);
    printf("Enter v2:");
    scanf("%f",&v2);
    avg=((2*v1*v2)/(v2+v1));
    printf("Average Velocity is %f",avg);
    return 0;
}
