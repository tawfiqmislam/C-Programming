#include<stdio.h>
#include<math.h>
int main()
{
    int array[50];
    int n;
    int nDigits;
    int i,j,k;

    printf("Enter the integer numbers: ");
    scanf("%d",&n);

    nDigits = floor(log10(abs(n))) + 1;
    printf("%d\n\n",nDigits);

    for (i = nDigits-1; i >= 0; i--)
    {
        array[i] = n % 10;
        n /= 10;
    }

    for(j=0;j<=nDigits-1;j++){

        for(k=j;k<=nDigits-1;k++){
            printf("%d ",array[k]);
        }
        printf("\n");
    }
    return 0;
}
