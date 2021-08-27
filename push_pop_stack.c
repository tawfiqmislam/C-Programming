#include <stdio.h>
int main()
{
    int stack[100], top=0, maxstk, i, choice;

    printf("Enter stack size: ");
    scanf("%d", &maxstk);

    do{
        printf("\nWhat You Wants to do? Push Or Pop? Enter Your Choice.\n1 for Push\n2 for Pop\n3 for Exit");
        scanf("%d", &choice);

        if(choice==1){
            push(stack, top, maxstk);
            top++;
        }
        else if(choice==2){
            pop(stack, top, maxstk);
            top--;
        }
        else if(choice==3){
            break;
        }
    }while(1);

}

push(int stack[], int top, int maxstk)
{
    int i, item;

    printf("\n\nGive the item to push into the stack: ");
    scanf("%d", &item);

    if(top==maxstk){
        printf("Overflow");
        return;
    }
    top = top+1;
    stack[top] = item;


    printf("After pushing the item: ");
    for(i=1; i<=top; i++){
        printf("%d ", stack[i]);
    }

    printf("\n\n");
}

pop(int stack[], int top, int maxstk)
{
    int i;

    if(top==0){
        printf("Underflow");
        return;
    }


    top=top-1;

    printf("After poping the item: ");
    for(i=1; i<=top; i++){
        printf("%d ", stack[i]);
    }

    printf("\n\n");
}
