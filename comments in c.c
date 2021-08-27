#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,length;
    gets(ch);
    length = strlen(ch);
    for(i=length-1; i>=0; i--)
    {
        printf("%c",ch[i]);
    }

    return 0;
}
