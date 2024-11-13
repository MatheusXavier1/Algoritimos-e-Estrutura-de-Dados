#include <stdio.h>

void printStack(int* stack, int top){
    for(int i = 0; i <= top; i++){
        printf("%d, ", stack[i]);
    }
    printf("\n");
}

void StackRemove(int* stack, int* top){
    
    int removed;

    if(*top != 0){
    removed = stack[*top];
    (*top)--;
    //printf("%d",*top);
    }
    else{
        printf("underflow");
    }
}

int main(){
    int top = 6;
    int stack[] = {1,2,3,4,5,6};

    StackRemove(stack, &top);
    printStack(stack, top);

    StackRemove(stack, &top);
    printStack(stack, top);

    StackRemove(stack, &top);
    printStack(stack, top);

    StackRemove(stack, &top);
    printStack(stack, top);

    StackRemove(stack, &top);
    printStack(stack, top);

    StackRemove(stack, &top);
    printStack(stack, top);

    StackRemove(stack, &top);   
    printStack(stack, top);

    return 0;
}