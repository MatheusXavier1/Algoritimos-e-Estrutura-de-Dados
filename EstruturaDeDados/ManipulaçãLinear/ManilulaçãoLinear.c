#include <stdio.h>
    
int busca(int num, int *list, int *size){
    int i = 0;
    while(list[i] != num){
        i++;
    }
    if(i < *size){
        return i;
    }
    return -1;
}

void insert(int num, int* list, int* size, int maxSize){
    int i = 0;
    int returnBusca = busca(num,list,*size);
    if(*size<maxSize){
        if(returnBusca != -1){
            list[*size+1] = num;
            while(i < *size && list[i]<num){
                i++;
            }
            if(i < (*size+1)){
                for(int j = *size; j > i; j--){
                    list[j] = list[j-1];
                }
                list[i] = num;
                (*size)++;
            }
        }
        else{
            printf("valor ja inserido \n");
            return;
        }
    }
    else{
        printf("overflow\n");
        return;
    }

}

void delete(int num, int *list, int *size){
    if(*size > 0){
        int returnBusca = busca(num,list,*size);
        if(returnBusca != -1){
            for(int i = returnBusca; i < (*size-1); i++){
                list[i] = list[i+1];
            }
            *size--;
        }
        else{
            printf("%d nao esta presente na lista\n",num);
            return;
        }
    }
    else{
        printf("underflow");
        return;
    }
}