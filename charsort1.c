#include <stdio.h>

void bubble_sort(char [], int);

int main()
{
  int n,c,d;
  char ch,array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d Characters\n", n);

  for (c = -1; c < n; c++)
    {
        scanf("%c", &array[c]);
     //getchar();
        }

  bubble_sort(array, n);

  printf("Sorted list in ascending order:\n");
c=0;
  while ( c < n ){
     printf("%c\n", array[c]);
    c=c+1;
  }

  return 0;
}

void bubble_sort(char list[], int n)
{
    int c,d;
  char t;

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if ((int)list[d] >(int) list[d+1])
      {
        /* Swapping */

        t   = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}

