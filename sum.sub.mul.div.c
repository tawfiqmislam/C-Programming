#include<stdio.h>
int main()
{
    check();
    return 0;
}

void check()
{
    int ch;
    printf("Enter operator 1 for sum\nEnter operator 1 for sub\nEnter operator 3 for multiplication\nEnter operator 4 for division\n");
    scanf("%d",&ch);
    if(1==ch)
    {
        sum();
    }
    else if(2==ch)
    {
        sub();
    }
     else if(3==ch)
    {
        multi();
    }
     else if(4==ch)
    {
        div();
    }
    else
    {
        wronginput();
    }
    printf("\n");
    check();
}
void sum()
{
    int a,b,t;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    t=a+b;
    printf("sum of %d + %d = %d\n",a,b,t);
}
void sub()
{
    int a,b,t;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    t=a-b;
    printf("sub of %d - %d = %d\n",a,b,t);
}
void multi()
{
    int a,b,t;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    t=a*b;
    printf("Multiplication of %d * %d = %d\n",a,b,t);
}
void div()
{
    int a,b,t;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    t=a/b;
    printf("Division of %d / %d = %d\n",a,b,t);
}
void wronginput()
{
    printf("wrong input. please try again.\n");
}
