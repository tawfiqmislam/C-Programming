#include<stdio.h>
int main()
{
    int shopping[5] = {350,120,400,375,280};
    int i;

    for(i=1;i<5;i++)
    {
        shopping[0]=shopping[0] + shopping[i];
    }

    printf("Total price is %d\n",shopping[0]);

    return 0;
}

