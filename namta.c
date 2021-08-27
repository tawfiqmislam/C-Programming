#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<=10){
        s=s+n;
        printf("%d x %d = %d \n", n,i,s);
        i=i+1;
    }
    return 0;
}
