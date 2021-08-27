#include <stdio.h>
long long int fact(long int a);
int main()
{
  long long int d,a;
  d=fact(a);
  printf("Factorial of number is: %lld",d);
  return 0;
}
long long int fact(long int a)
{
  long long int i,b=1;
  scanf("%lld",&a);
  for (i=1;i<=a;i++){
   b=b*i;}

return b;
}
