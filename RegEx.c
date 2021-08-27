#include <stdio.h>
#include <string.h>

char regEx[10], inputString[30];
int currentCharacterIndex;
void matchStar(int index);

int main()
{

    int i, len, flag;
    printf("Enter a regular expression: ");
    gets(regEx);

    while(1)
    {
        flag = 1;

        printf("Enter a string (type exit to close): ");
        gets(inputString);

        if(strcmp(inputString, "exit") == 0)
            break;

        len = strlen(regEx);
        currentCharacterIndex = 0;

        for(i=0; i<len; i++)
        {

            if(regEx[i] == '*')
            {
                matchStar(i);
            }else
            {
                if((i == (len-1)) || (regEx[i+1] != '*'))//this is the last character or no operator next, so match the character
                {
                    if(regEx[i] != inputString[currentCharacterIndex])
                    {
                        flag = 0;
                        break;
                    }else
                    {
                        currentCharacterIndex++;
                    }

                }
            }

        }

        if(flag && inputString[currentCharacterIndex=='/0']){
            printf("Match\n");
        }else
        {
            printf("Don't match\n");
        }

    }

    return 0;

}

void matchStar(int index)
{
    if(index-1 < 0)
        return;

    if(regEx[index-1] != inputString[currentCharacterIndex])
    {
        return;
    }else
    {
        while(regEx[index-1] == inputString[currentCharacterIndex])
            currentCharacterIndex++;
    }

}
