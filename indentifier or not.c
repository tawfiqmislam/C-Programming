#include<stdio.h>
#include<string.h>

int main()

{
    char keyword[32][10]={"auto","double","int","struct","break","else","long",

       "switch","case","enum","register","typedef","char",

       "extern","return","union","const","float","short",

       "unsigned","continue","for","signed","void","default",

       "goto","sizeof","voltile","do","if","static","while"} ;

char string[25];

int count=0,flag,i;


gets(string);

for(i=0;i<32;i++)

 {

   if(strcmp(string,keyword[i])==0)

   {

     printf("Invalid\n");
     exit(0);
   }

 }


if( (string[0]>='a'&&string[0]<='z')

    ||

    (string[0]>='A'&&string[0]<='Z')

    ||

    (string[0]=='_')

   )

       {



   for(i=1;i<=strlen(string);i++)

   {

     if((string[i]>='a'&& string[i]<='z')

     ||

      (string[i]>='A' && string[i]<='Z')

     ||

     (string[i]>='0'&& string[i]<='9')

     ||

     (string[i]=='-')

     )

     {

 count++;



     }

   }

    if(count==strlen(string))

    {

      flag=0;

    }

  }

 else

 {

  flag=1;

 }



if(flag==1)

 printf("Invalid\n");

 else

 printf("Valid\n");

 return 0;

}
