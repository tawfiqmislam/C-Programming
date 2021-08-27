#include<stdio.h>
typedef struct{
    int no;
    char name;
    int roll;
    char ch;

}book;
int main()
{
    book book1,book2,book3;
    book1.no=1;
    book1.name='n';
    book1.roll=1001;
    book1.ch='a';
    book2.no=2;
    book2.name='b';
    book2.roll=1010;
    book2.ch='b';
    book3.no=3;
    book3.name='v';
    book3.roll=1100;
    book3.ch='c';
    printf("%d  %c  %d  %c\n",book1.no,book1.name,book1.roll,book1.ch);
    printf("%d  %c  %d  %c\n",book2.no,book2.name,book2.roll,book2.ch);
    printf("%d  %c  %d  %c\n",book3.no,book3.name,book3.roll,book3.ch);

    return 0;

}
