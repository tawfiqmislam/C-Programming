#include<stdio.h>
int main()
{
    int i,sum=0;
    double average,j=0;
    while(1)
    {
        scanf("%d",&i);
        if(i<0)
        {
            break;
        }
        else
        {
            sum=sum+i;
            j++;
        }
    }
    average = sum/j;

        printf("%.2lf\n",average);
    return 0;
}
