#include<iostream.h>
#include<conio.h>

 int main()
    {
       clrscr();

       int marks;
       char grade;

       cout<<"\n Enter your Marks = ";
       cin>>marks;

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

       cout<<"\n Your Grade is = "<<grade<<endl;

       getch();
       return 0;
    }
