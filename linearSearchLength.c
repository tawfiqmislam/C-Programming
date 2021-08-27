#include <stdio.h>
void range(int data[],int n,int item);
int linear_search(int data[], int a, int b);

int main()
{

    int b, i, data[100], item;
    //input number of element of array
    printf("Input Number of element of array: \n");
    scanf("%d", &b);
    //input numbers
    printf("\nInput %d numbers: \n",b);
    for(i=1; i<=b; i++){
        scanf("%d", &data[i]);
    }
    //input search number
    printf("Enter Number to search: \n");
    scanf("%d", &item);
    //call range function
   range(data, b, item);

}

int linear_search(int data[], int a, int item)
{

    int loc = 0, i,t=0;

    for(i=1; i<a; i++){
        if(data[i]==item){
           loc = i;
       break;

        }

    }
    return loc;
}

void range(int data[],int n,int item){
    int m,j,k;
    printf("Enter renge Limit (lower to upper) : ");
    scanf("%d%d",&m,&j);
    k= linear_search(data, n, item);
    if(k>=m&&k<=j){
        printf("%d number is in range",item);
    }
    else{
        printf("%d number is not in range\n",item);
        printf("%d number location is: %d",item,k);
    }

}
