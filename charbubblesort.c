#define CLASS_SIZE 10
#include <stdio.h>

void bubbleSortAWriteToB(const char a[], char * b[]);

int main(void){
    int i;

    // initialize array
    char * s_letters[CLASS_SIZE];
    char letters[CLASS_SIZE] = {'a','r','p','b','r','c','x','e','w','j'};

    // sort array
    bubbleSortAWriteToB(letters,s_letters);

    // print sorted array
    for (i=0;i<CLASS_SIZE;i++){
        printf("%c\n", *s_letters[i]);
    }

    return 0;
}

void bubbleSortAWriteToB(const char a[], char * b[]){
    char * temp;
    int i,j;

    // initialize b array to hold pointers to each element in a
    for (i=0;i<CLASS_SIZE;i++){
        b[i] = (char *)(a) + i;
    }

    // in-place sort the b array
    for(i=0;i<CLASS_SIZE;i++){
        for(j=i+1;j<CLASS_SIZE-1;j++){
            if(*b[j-1]>*b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }
    }
}
