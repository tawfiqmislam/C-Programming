#include<stdio.h>
int main()
{
    check();
    return 0;
}

void check()
{
    float s,pixel,total;
    printf("Enter size: ");
    scanf("%f",&s);
    printf("Enter pixel: ");
    scanf("%f",&pixel);
    total=((s/1900)*1200);
    printf("\nConverted size: %.2f\n\n",total);
    check();
}
