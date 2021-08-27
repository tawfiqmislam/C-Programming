#include<stdio.h>
int main()
{
    int i,j,m[10][10],n[10][10],c[10][10],k,sum,p,q,r,s;
    printf("Enter first matrix row:  ");
    scanf("%d",&p);
    printf("Enter first matrix column:  ");
    scanf("%d",&q);
    printf("Enter the first matrics:\n ");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&m[i][j]);
        }
    }
     printf("Enter second matrix row:  ");
    scanf("%d",&r);
    printf("Enter second matrix column:  ");
    scanf("%d",&s);
    printf("Enter the second matrics:\n ");
    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            scanf("%d",&n[i][j]);
        }
    }
    printf("First matrics: \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("        %d",m[i][j]);
        }
        printf(" \n");
    }
     printf("Second matrics: \n");
    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            printf("        %d",n[i][j]);
        }
        printf(" \n");
    }
    if(q==r){
   for(i=0;i<p;i++){
        for(j=0;j<s;j++){
                sum=0;
            for(k=0;k<q;k++){
                sum=sum+m[i][k]*n[k][j];
                c[i][j]=sum;
            }
        }
   }
   printf("matrix multiplication: \n");
   for(i=0;i<p;i++){
        for(j=0;j<s;j++){
            printf("       %d",c[i][j]);
        }
        printf("\n");
   }
    }
    else{
        printf("\n\nmatrix multiplication is not possible.\n");
    }

    return 0;
}
