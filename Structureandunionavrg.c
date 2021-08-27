#include<stdio.h>
int e(int a[][3], int p,int q)
{
    int i,j,sum=0,mul,e;
    for(i=1;i<=p;i++){
        for (j=1;j<=q;j++){
        scanf("%d",&a[i][j]);
    sum=sum+a[i][j];
        }
    }
    e=sum/(p*q);
    return e;
}
int main()
{
    int cse[2][3];
    float n;
    n=e(cse,2,3);
    printf("%.2f",n);
    getch();
    return 0;
}
