#include <stdio.h>

int busca(int *list, int num, int *size){
    int i = 0;
    while(i < size){
        if(list[i] == num){
            return i;
        }
            i++;
    }
    return -1;
}

void delete(int *list, int num, int *size){
    if(*size > 0){
        int search = busca(list,num, *size);
        if(search != -1){
            for(int i = search; i < (*size-1); i++){
                list[i] = list[i+1];
            }
            (*size)--;
        }
        else{
            printf("nao esta na lista");
            return;
        }
    }
    else{
        printf("underflow");
        return;
    }
}

int main(){

    int list[10] = {2,4,6,8};
    int size = 4;

    delete(list, 4, &size);

    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }

    return 0;
}