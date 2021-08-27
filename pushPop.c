#include <stdio.h>
push(int stack[], int top, int maxstk);
pop(int stack[], int top, int maxstk);
void start_again();
int main()
{
    int stack[100], top=0, maxstk, i, choice;

    printf("Enter stack size: ");
    scanf("%d", &maxstk);


    do{
        printf("\nWhat operation do you want? Push Or Pop? Enter Your Choice.\nfor Push press 1\nfor Pop  press 2\nfor Exit press 3");
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
        start_again();
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
        start_again();
    }


    top=top-1;

    printf("After poping the item: ");
    for(i=1; i<=top; i++){
        printf("%d ", stack[i]);
    }

    printf("\n\n");
}

void start_again(){
int num;
printf("\nEnter 4 for start again or 0 for exit: ");
scanf("%d",&num);
if(num==4){
    main();
}
else
{
    exit(0);
}
}
