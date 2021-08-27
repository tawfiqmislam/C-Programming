/* program for calculating the age */
/* author - Md.Tawfiqul Islam */
/* Email - tawfiqmislam@gmail.com */
#include<stdio.h>
#include<conio.h>
int d1,d2,d3,m1,m2,m3,y1,y2,y3;
void year(int d1,int m1,int y1,int d2,int m2,int y2);
int main()
{
    printf("Please enter the current date \n");
    printf("\nEnter the day: ");
    scanf("%d",&d1);
    printf("\nEnter the month: ");
    scanf("%d",&m1);
    printf("\nEnter the year: ");
    scanf("%d",&y1);
    printf("\nThank you for your cooperation. \n\nNow please enter the date of birth");
    printf("\n\nEnter the day: ");
    scanf("%d",&d2);
    printf("\nEnter the month: ");
    scanf("%d",&m2);
    printf("\nEnter the year: ");
    scanf("%d",&y2);
    year(d1,m1,y1,d2,m2,y2);
    getch();
    return 0;
}

void year(int d1,int m1,int y1,int d2,int m2,int y2)
{
    if(d2>d1)
    {
        m1=m1-1;
        d1=d1+30;
    }
    if(m2>m1)
    {
        y1=y1-1;
        m1=m1+12;
    }
    if(y2>y1)
    {
        exit(0);
    }

    d3=d1-d2;
    m3=m1-m2;
    y3=y1-y2;
    printf("\nCurrent age is %d Year, %d Month, %d Day",y3,m3,d3);
    printf("\n\nauthor - Md.Tawfiqul Islam\nEmail - tawfiqmislam@gmail.com");
    printf("\n\n          Thank you");
}


