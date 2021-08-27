#include<stdio.h>
int main()
{
     int marks=78;
     char grade;
      switch(marks/10)
      {
         case 10 :  grade='A';
            break;

         case 9 :  grade='A';
            break;

         case 8 :  grade='A';
            break;

         case 7 :  grade='B';
            break;

         case 6 :  grade='C';
            break;

         case 5 :  grade='D';
            break;

         default : grade='F';
      }
    return 0;
}
