#include<stdio.h>
int add(int a,int b){
int c=a+b;
return c;
}
int main(){
    int a=2,b=3,d=6,e;
    e=add(a,b)+d;
    printf("%d",e);
}
