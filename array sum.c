#include <stdio.h>
#define   SIZE  12

int main()
{
       // declare and initialize the array named a with size SIZE
       int a[SIZE] = {1,3,5,4,7,2,99,16,45,67,89,45};
       // declare two normal variables
       int i, total = 0;
       // do the loop for the array...
       for(i = 0; i <= (SIZE-1); i++)
       {
              // display the array and its element...
              printf("\n a[%d]= %d", i, a[i]);
              // total up the array
              // total = total + a[i]
              total += a[i];
       }
       printf("\nThe sum of the array elements is %d\n", total);
       return  0;
}
