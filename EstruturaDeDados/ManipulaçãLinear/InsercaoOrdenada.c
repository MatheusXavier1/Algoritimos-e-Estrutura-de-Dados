#include <stdio.h>

int busca(int num, int *list, int size){
    int i = 0;
    list[size+1] = num;

    while(list[i]!=num){
        i++;
    }    
    if(i==(size+1)){
        return 0; // nao estava na lista
    }
    return 1;

}

void insert(int num, int *list, int *size, int maxSize){
    int search = busca(num, list,*size);
    if(*size<maxSize){
        if(search == 0){
            list[*size+1] = num; 
            int i = 0;
            while(i < *size && list[i] < num){
                i++;
            }
            if(i < (*size+1) ){ 
                for(int j = *size; j > i; j--){
                    list[j] = list[j-1];
                }
                list[i] = num;
                (*size)++;
            }
        }
        else{
            printf("valor ja inserido\n");
        }
    }
    else{
        printf("overflow\n");
    }

}

int main(){
    int list[10] = {2,4,6,8};
    int size = 4;

    insert(3,list, &size,10); // o uso do & serve para que a função inserir possa acessar o endereço da variavel size e mude o valor contido no endereço
    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }
    printf("\n");
        insert(5,list, &size,10); // o uso do & serve para que a função inserir possa acessar o endereço da variavel size e mude o valor contido no endereço
    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }
    printf("\n");
        insert(1,list, &size,10); // o uso do & serve para que a função inserir possa acessar o endereço da variavel size e mude o valor contido no endereço
    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }
    printf("\n");
    return 0;
}
