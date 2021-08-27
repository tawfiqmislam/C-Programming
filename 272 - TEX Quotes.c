#include<stdio.h>

int main()
{
    long int count;
    char a;
    count=1;
  while(scanf("%c",&a)==1)
  {

        if(a== '"' && count%2==1)
        {
            printf("``");
            count++;
        }
        else if(a=='"' && count%2==0)
        {
            printf("''");
            count++;
        }
        else
            printf("%c",a);
  }
    return 0;
}
