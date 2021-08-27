#include <stdio.h>

int linear(int data[], int a, int b);

int main()
{

    int b, i, data[100], item;
    puts("How many index: ");
    scanf("%d", &b);
    puts("Enter Array: ");
    for(i=1; i<=b; i++){
        scanf("%d", &data[i]);
    }
    puts("Enter Number to search: ");
    scanf("%d", &item);

    linear(data, b, item);

}

int linear(int data[], int a, int item)
{

    int loc = 0, i;

    for(i=0; i<a; i++){
        if(data[i]==item){
           loc = i;
           break;
        }
    }

    if(loc==0) printf("Data is not in array");
    else printf("%d is the loaction of %d", loc, item);

}
