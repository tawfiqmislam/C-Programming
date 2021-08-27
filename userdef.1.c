#include<stdio.h>
int add(int a, int b);
int main()
{
    int a = 13, b = 4, d = 5, e;
    e = add(a, b) + d;
    printf("%d", e);
}

int add(int a, int b){

    int c = a+b;
    return c;

}
