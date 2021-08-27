#include<stdio.h>
int main() {

    char str1[10], str2[10];
    int n, space;
    printf("Enter number of space : ");
    scanf("%d", &space);
    printf("Enter number : ");
    scanf("%d", &n);

    sprintf(str2, "%%%dd", space);
    sprintf(str1, str2, n);

    printf("%s\n", str1);

    return (0);
}
