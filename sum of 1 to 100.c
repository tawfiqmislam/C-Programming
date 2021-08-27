#include<stdio.h>
int main()
{
    int first_num;
    int last_num;
    int result;
    printf("Enter 1st number: ");
    scanf("%d",&first_num);
    printf("Enter last number: ");
    scanf("%d",&last_num);
    result = ((first_num+last_num)*(last_num))/2;
    printf("sum of the numbers from %d to %d is %d\n",first_num, last_num, result);
    return 0;
}
