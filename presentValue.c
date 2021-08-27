#include<stdio.h>
#include<math.h>
int main()
{
    calc();
    return 0;
}

void calc()
{
    double p,f,i,n,pr;
    printf("\nEnter value of F: ");
    scanf("%lf",&f);
    printf("\nEnter value of I: ");
    scanf("%lf",&i);
    printf("\nEnter value of n: ");
    pr = i/100;
    scanf("%lf",&n);
    p = f/pow((1+pr),n);

    printf("Present value (%lf %) : %lf \n",i,p);

    calc();
}
