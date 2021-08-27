#include<stdio.h>
#include<string.h>
char str(char[]);
int main()
{
    char st[100],c;
    printf("Enter any String\n");
    c=str(st);
        printf("sorted string  \n");
        printf("%s",st);
}

char str(char st[100])
{
    char str,temp;
    int l,i,j;
  gets(st);
  l=strlen(st);
  /*Logic Bubble Sort  */
  for(i=1;i<l;i++)
     for(j=0;j<l-i;j++)
	if(st[j]>st[j+1])
	{
	   temp=st[j];
	   st[j]=st[j+1];
	   st[j+1] =temp;
	}
}
