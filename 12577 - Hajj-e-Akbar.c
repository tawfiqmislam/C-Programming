#include <stdio.h>

int main()
{
    char arr[6];
    int i=1;
    while(1){
        gets(arr);
        if(arr[0]=='*')
            break;
        int len=strlen(arr);
        if(len==4){
            printf("Case %d: Hajj-e-Akbar\n",i);
        }else{
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
