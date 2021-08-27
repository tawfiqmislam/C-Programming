#include <stdio.h>

int main()
{
    int year,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        printf("%d is leap year\n",year);
    }
     else if(year%55==0){
        printf("%d is bulukulu festival year\n",year);
    }
     else if(year%15==0){
        printf("%d is hulukulu festival year\n",year);
    }
    else{
        printf("%d is an ordinary year\n",year);
    }
    }
    return 0;
}
