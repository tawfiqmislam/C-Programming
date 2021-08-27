#include<stdio.h>
    int main()
    {
       int i,j,n;
       printf("Enter how many rows you want: ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
          for(j=1;j<=(n-i);j++)
             printf(" ");   // Only one space
          for(j=1;j<=i;j++)
             printf("* ");  // one star and one space
          printf("\n");
       }
       return 0;
    }
