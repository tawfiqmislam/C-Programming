#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=0;
    while(i<n){
        s=s+1;
        printf("%d\n",s);
        i=i+1;
    }
    return 0;
}
