#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter a number : ");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
      if(n%i==0){
    printf("%d is not a prime number",n);
    break;}
  }
     if(n==i)
    {
        printf("%d is a prime number",n);
    }
}
