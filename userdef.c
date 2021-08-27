#include <stdio.h>
int fact(int a);
int main()
{
  int d,a;
  d=fact(a);
  printf("Factorial of number is: %d",d);
  return 0;
}
int fact(int a)
{
  int i,b=1;
  scanf("%d",&a);
  for (i=1;i<=a;i++){
   b=b*i;}

return b;
}
