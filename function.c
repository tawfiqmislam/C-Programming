#include<stdio.h>
int main()
{
    check();
    return 0;
}
void check()
{
    int num;
    printf("Enter 1 for leap year\nEnter 2 for Even odd\nEnter 3 for prime or not prime\nEnter 4 for Grade point\nEnter 0 for Exit\n");
    scanf("%d",&num);
    if(1==num)
    {
        leapyear();
    }
    else if(2==num)
    {
        evenodd();
    }
    else if(3==num)
    {
        prime();
    }
    else if(4==num)
    {
        grade();
    }
    else if(0==num)
    {
        exit(0);
    }
    else
    {
        printf("Wrong input.please try again\n");
    }
    printf("\n");
    check();

}
void leapyear()
{
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        printf("%d is leap year.\n",year);
    }
    else
    {
        printf("%d is not leap year.\n",year);
    }

}
void evenodd()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is Even.\n",n);
    }
    else
    {
        printf("%d is Odd.\n",n);
    }
}
void prime()
{
    int n, i = 2;

    printf("Enter a number to check if it is prime\n");
    scanf("%d",&n);

    for ( i = 2 ; i <= n - 1 ; i++ )
    {
        if ( n%i == 0 )
        {
            printf("%d is not prime.\n", n);
            break;
        }
    }
    if ( i == n )
        printf("%d is prime.\n", n);
}
void grade()
{
    float num;
    printf("Enter Your Subject Number: ");
    scanf("%f",&num);
    if (num>79.5&&num<=100)
    {
        printf("A+");
    }
    else if (num>69&&num<=79.5)
    {
        printf("A");
    }
    else if (num>64&&num<=69)
    {
        printf("A-");
    }
    else if (num>59&&num<=64)
    {
        printf("B+");
    }
    else if (num>54&&num<=59)
    {
        printf("B");
    }
    else if (num>49&&num<=54)
    {
        printf("B-");
    }
    else if (num>44&&num<=49)
    {
        printf("C");
    }
    else if (num>39&&num<=44)
    {
        printf("D");
    }
    else if (num>=0&&num<=39)
    {
        printf("F");
    }
    else
    {
        printf("Wrong Input. Please Try again");
    }
}
