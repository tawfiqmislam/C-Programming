#include<stdio.h>
float grade(float num)
{
    if (num>79&&num<=100){
        printf("A+");
    }
    else if (num>69&&num<=79){
        printf("A");
    }
    else if (num>64&&num<=69){
        printf("A-");
    }
    else if (num>59&&num<=64){
        printf("B+");
    }
    else if (num>54&&num<=59){
        printf("B");
    }
    else if (num>49&&num<=54){
        printf("B-");
    }
    else if (num>44&&num<=49){
        printf("C");
    }
    else if (num>39&&num<=44){
        printf("D");
    }
    else if (num>=0&&num<=39){
        printf("F");
    }
    else {
         printf("Wrong Input. Please Try again");
    }
}
int main()
{
    float x;
    printf("Enter Your Subject Number: ");
    scanf("%f",&x);
    grade(x);
    return 0;
}
