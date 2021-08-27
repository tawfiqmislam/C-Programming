#include<stdio.h>
int fib(int a);
int main()
{
    int n;

    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series are :- ",n);
    fib(n);
  }
int fib(int a)
{
    int first = 0, second = 1, next, c;
   for ( c = 0 ; c < a; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d ",next);
   }
}
