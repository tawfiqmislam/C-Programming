#include <stdio.h>
int main()
{
     int i,n ,r2,j, z, m, k, s, sum=0, l=0, f[100],temp;

    printf("Enter the first matrix row : ");
    scanf("%d",&n);
    printf("Enter the first matrix colum : ");
    scanf("%d",&s);

        int a[50][50], b[50][50], c[50][50];
        //scanf("%d %d",n,s);
        for(i=0; i<n; i++){
            for(j=0; j<s; j++){
                scanf("%d", &a[i][j]);
            }
        }


    printf("Enter the second matrix row : ");
    scanf("%d",&r2);
    printf("Enter the second matrix colom: ");
    scanf("%d",&m);
        for(i=0; i<r2; i++){
            for(j=0; j<m; j++){
                scanf("%d", &b[i][j]);
            }
        }
         printf("First matrix: \n");
        for(i=0; i<n; i++){
            for(j=0; j<s; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix: \n");
        for(i=0; i<r2; i++){
            for(j=0; j<m; j++){
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
     printf("Matrix Multiplication : ");
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                for(k=0; k<s; k++){
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum = 0;

            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                f[l] = c[i][j];
                l++;
            }
        }

        z = n*m;

        for(j=0; j<z; j++){
            for(i=j+1; i<=z; i++){
                if(f[j]>f[i]){
                    temp=f[j];
                    f[j] = f[i];
                    f[i]=temp;
                }
            }
        }

        l=0;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                c[i][j] = f[l];
                l++;
            }
        }
     printf(" Result :");
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
}
