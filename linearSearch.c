#include <stdio.h>

int linear_search(int data[], int a, int b);

int main()
{

    int b, i, data[100], item;
    printf("Input Number of element of array: \n");
    scanf("%d", &b);
    printf("\nInput %d numbers: \n",b);
    for(i=1; i<=b; i++){
        scanf("%d", &data[i]);
    }
    printf("Enter Number to search: \n");
    scanf("%d", &item);

    linear_search(data, b, item);

}

int linear_search(int data[], int a, int item)
{

    int loc = 0, i,t=0;

    for(i=1; i<a; i++){
        if(data[i]==item){
           loc = i;
           t++;
            printf("%d is the loaction of %d \n", loc, item);

        }

    }

    if(loc!=0){
            printf("%d's Total location: %d  ", item,t);

    }
    else{
            printf("%d is not present in array",item);

    }
}
