#include<stdio.h>
int main(void)
{
    char cse[50],ch;
    int i;
    i=0;
    do
    {
        ch=getchar();
        cse[i]=ch;
        i++;
    }
    while (ch!='\n');
    i=i-1;
    cse[i]='\0';
    printf("%s",cse);


}
