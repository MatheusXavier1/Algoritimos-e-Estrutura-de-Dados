/*
Pilha funciona em LiFo: Last In First Out
Insere no topo, remove no topo

*/
#include <stdio.h>

void StackInsert(int* stack, int num, int size, int* top){
    if(*top < size-1){
        (*top)++;
        stack[*top] = num;
    }
    else{
        printf("Stack overflow\n");
    }
}
void printStack(int* stack, int top){
    for(int i = 0; i <= top; i++){
        printf("%d, ", stack[i]);
    }
    printf("\n");
}

int main(){
    int stack[20];  
    int size = 20;
    int top = -1;
    StackInsert(stack, 2, size, &top);
    printStack(stack, top);

    StackInsert(stack, 5, size, &top);
    printStack(stack, top);

    StackInsert(stack, 8, size, &top);
    printStack(stack, top);

    StackInsert(stack, 1, size, &top);
    printStack(stack, top);

    StackInsert(stack, 10, size, &top);
    printStack(stack, top);

    StackInsert(stack, 15, size, &top);
    printStack(stack, top);

    StackInsert(stack, 20, size, &top);
    printStack(stack, top);

    StackInsert(stack, 25, size, &top);
    printStack(stack, top);

    StackInsert(stack, 30, size, &top);
    printStack(stack, top);

    StackInsert(stack, 35, size, &top);
    printStack(stack, top);

    StackInsert(stack, 40, size, &top);
    printStack(stack, top);

    StackInsert(stack, 45, size, &top);
    printStack(stack, top);

    StackInsert(stack, 50, size, &top);
    printStack(stack, top);

    StackInsert(stack, 55, size, &top);
    printStack(stack, top);

    StackInsert(stack, 60, size, &top);
    printStack(stack, top);

    StackInsert(stack, 65, size, &top);
    printStack(stack, top);

    StackInsert(stack, 70, size, &top);
    printStack(stack, top);

    StackInsert(stack, 75, size, &top);
    printStack(stack, top);

    StackInsert(stack, 80, size, &top);
    printStack(stack, top);
    return 0;
}