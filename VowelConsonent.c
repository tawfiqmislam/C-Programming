#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c",&letter);
    if((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u')||(letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U'))
    {
        printf("Vowel");
    }
    else if((letter=='0')||(letter=='1')||(letter=='2')||(letter=='3')||(letter=='4')||(letter=='5')||(letter=='6')||(letter=='7')||(letter=='8')||(letter=='9'))
    {
        printf("Number");
    }
    else
    {
        printf("Consonent");
    }
    return 0;
}
