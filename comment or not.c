#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int length;
    gets(ch);
    length=strlen(ch);

        if(ch[0]=='/' && ch[1]=='/')
        {
            printf("It is a comment\n");
        }
        else if((ch[0]=='/' && ch[1]=='*')&&(ch[length-2]=='*' && ch[length-1]=='/'))
        {
            printf("It is a comment\n");
        }
        else
        {
            printf("It is not a comment\n");
        }
    return 0;
}

