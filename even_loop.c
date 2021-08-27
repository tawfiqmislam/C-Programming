#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i=i+1){
            s=s+1;
        if(s%2==0){
            printf("%d",s);
        }
        else{
            printf("\n");
        }
    }
    return 0;
}
