#include<stdio.h>
#define max 100000

int main()
{
    int i, count,start;
    char ch[max];
    while(gets(ch))
    {

        count=0;
        start=0;
        for(i=0;ch[i]!='\0';i++)
        {

            if(((ch[i]>='a' && ch[i]<='z') || ( ch[i]>='A' && ch[i]<='Z')))
                start=1;
            else
            {
                if(start)
                {
                    count++;
                    start=0;

                }
            }

        }
        if(ch[i]=='\0' && start==1)
            count++;
        printf("%d\n",count);
    }
    return 0;
}
