#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 1000
int main()
{
    printf("\n\t\t\tNumber System\t\t\t\n");
    printf("\t\t  Author: Md.Tawfiqul Islam\t\t\n\n");
    menu();
    return 0;
}
void menu()
{
    printf("\tEnter 1 for convert Binary number to Octal number\n");
    printf("\tEnter 2 for convert Binary number to Hexadecimal number\n");
    printf("\tEnter 3 for convert Binary number to Decimal number\n");
    printf("\tEnter 4 for convert Octal number to Binary number\n");
    printf("\tEnter 5 for convert Octal number to Hexadecimal number\n");
    printf("\tEnter 6 for convert Octal number to Decimal number\n");
    printf("\tEnter 7 for convert Hexadecimal number to Binary number\n");
    printf("\tEnter 8 for convert Hexadecimal number to Octal number\n");
    printf("\tEnter 9 for convert Hexadecimal number to Decimal number\n");
    printf("\tEnter 10 for convert Decimal number to Binary number\n");
    printf("\tEnter 11 for convert Decimal number to Hexadecimal number\n");
    printf("\tEnter 12 for convert Decimal number to Octal number\n");
    printf("\tEnter 0 for Exit\n\n");
    check();
}

void check()
{
    int num;

    printf("\tEnter the number: ");
    scanf("%d",&num);
    printf("\n\n");
    if(num==0)
    {
        exit(0);
    }
    else if(num==1)
    {
        printf("\t\tConvertion of Binary Number to Octal Number\t\t\n");
        BinToOct();
    }
    else if(num==2)
    {
        printf("\t\tConvertion of Binary Number to HexaDecimal Number\t\t\n");
        BinToHex();
    }
    else if(num==3)
    {
        printf("\t\tConvertion of Binary Number to Decimal Number\t\t\n");
        BinToDec();
    }
     else if(num==4)
    {
        printf("\t\tConvertion of Octal Number to Binary Number\t\t\n");
        OctToBin();
    }
    else if(num==5)
    {
        printf("\t\tConvertion of Octal Number to HexaDecimal Number\t\t\n");
        OctToHex();
    }
    else if(num==6)
    {
        printf("\t\tConvertion of Octal Number to Decimal Number\t\t\n");
        OctToDec();
    }
     else if(num==7)
    {
        printf("\t\tConvertion of Hexadecimal Number to Octal Number\t\t\n");
        HexToOct();
    }
    else if(num==8)
    {
        printf("\t\tConvertion of Hexadecimal Number to Binary Number\t\t\n");
        HexToBin();
    }
    else if(num==9)
    {
        printf("\t\tConvertion of Hexadecimal Number to Decimal Number\t\t\n");
        HexToDec();
    }
     else if(num==10)
    {
        printf("\t\tConvertion of Decimal Number to Octal Number\t\t\n");
        DecToOct();
    }
    else if(num==11)
    {
        printf("\t\tConvertion of Decimal Number to HexaDecimal Number\t\t\n");
        DecToHex();
    }
    else if(num==12)
    {
        printf("\t\tConvertion of Decimal Number to Binary Number\t\t\n");
        DecToBin();
    }
    else
    {
        printf("\t\tWrong input. Please enter the currect input.\n\n");
        check();
    }

}
BinToOct()
{
    long int binarynum, octalnum = 0, j = 1, remainder;

    printf("\tEnter the value for  binary number: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    printf("\tEquivalent octal value: %lo\n\n", octalnum);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check1();
}
check1()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        BinToOct();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check1();
    }
}
BinToHex()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;

    printf("\tEnter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("\tEquivalent hexadecimal value: %lX\n\n", hexadecimalval);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check2();
}
check2()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        BinToHex();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check2();
    }
}
BinToDec()
{
    long long n;
    printf("\tEnter a binary number: ");
    scanf("%lld", &n);
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    printf("\tEquivalent decimal value: %d\n\n", decimalNumber);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check3();
}
check3()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        BinToDec();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check3();
    }
}
OctToBin()
{
    char octalnum[MAX];
    long i = 0;

    printf("\tEnter any octal number: ");
    scanf("%s", octalnum);
    printf("\tEquivalent binary value: ");
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000"); break;
        case '1':
            printf("001"); break;
        case '2':
            printf("010"); break;
        case '3':
            printf("011"); break;
        case '4':
            printf("100"); break;
        case '5':
            printf("101"); break;
        case '6':
            printf("110"); break;
        case '7':
            printf("111"); break;
        default:
            printf("\n\t Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
    getch();
    printf("\n\n\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check4();
}
check4()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        OctToBin();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check4();
    }
}
OctToHex()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, tempOctal, binary, place;
    char hex[65] = "";
    int rem;

    place = 1;
    binary = 0;

    /* Input octal number from user */
    printf("\tEnter any octal number: ");
    scanf("%lld", &octal);
    tempOctal = octal;

    /*
     * Octal to binary conversion
     */
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;

        place *= 1000;
    }

    /*
     * Binary to hexadecimal conversion
     */
    while(binary > 0)
    {
        rem = binary % 10000;
        switch(rem)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    strrev(hex);

    printf("\tOctal number: %lld\n", octal);
    printf("\tHexadecimal number: %s\n\n", hex);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check5();
}
check5()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        OctToHex();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check5();
    }
}
OctToDec()
{
    long int octal, decimal = 0;
    int i = 0;

    printf("\tEnter any octal number: ");
    scanf("%ld", &octal);
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("\tEquivalent decimal value: %ld\n\n",decimal);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check6();
}
check6()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        OctToDec();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check6();
    }
}
HexToOct()
{
    int n;
    printf("\n\tEnter an hexadecimal number: ");
    scanf("%x",&n);
    printf("\tEquivalent octal value: %o\n\n", n);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check7();
}
check7()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        HexToOct();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check7();
    }
}
HexToBin()
{
       char binarynum[MAX], hexa[MAX];
    long int i = 0;

    printf("\tEnter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n\tEquivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n\tInvalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
    getch();
    printf("\n\n\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check8();
}
check8()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        HexToBin();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check8();
    }
}
HexToDec()
{
    long long decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hexadecimal[30];
    int i, j, power=0, digit;

    printf("\tEnter a Hexadecimal Number: ");
    scanf("%s", hexadecimal);

    /* Converting hexadecimal number to decimal number */
    for(i=strlen(hexadecimal)-1; i >= 0; i--) {
        /*search currect character in hexDigits array */
        for(j=0; j<16; j++){
            if(hexadecimal[i] == hexDigits[j]){
                decimalNumber += j*pow(16, power);
            }
        }
        power++;
    }

    printf("\tEquivalent Decimal Number : %ld\n\n", decimalNumber);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check9();
}
check9()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        HexToDec();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check9();
    }
}
DecToOct()
{
    long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;

    printf("\tEnter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("\tEquivalent octal value: ");
    for (j = i - 1; j > 0; j--)
    {
        printf("%d", octalNumber[j]);
    }
    getch();
    printf("\n\n\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check10();
}
check10()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        DecToOct();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check10();
    }
}
DecToHex()
{
    long int decimalNumber,remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	printf("\tEnter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0) {
		temp = quotient % 16;
		//To convert integer into character
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("\tEquivalent hexadecimal value: ");
	for (j = i -1 ;j> 0;j--)
	{
	    printf("%c",hexadecimalNumber[j]);
	}
    getch();
    printf("\n\n\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check11();
}
check11()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        DecToHex();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check11();
    }
}
DecToBin()
{
     int dec, bin;

    printf("\tEnter a decimal number: ");
    scanf("%d", &dec);
    bin = convert(dec);
    printf("\tEquivalent binary Number: %d\n\n", bin);
    getch();
    printf("\tEnter 1 for try again\n");
    printf("\tEnter 2 for go to the Main Menu\n");
    printf("\tEnter 0 for Exit\n");
    check12();
}
check12()
{
    int num1;
    printf("\tEnter the Value: ");
    scanf("%d",&num1);
    printf("\n");
    if(num1==0)
    {
        exit(0);
    }
    else if(num1==1)
    {
        DecToBin();
    }
    else if(num1==2)
    {
        menu();
    }
    else
    {
        printf("\tWrong input. please enter the currect input.\n ");
        check12();
    }
}

int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
