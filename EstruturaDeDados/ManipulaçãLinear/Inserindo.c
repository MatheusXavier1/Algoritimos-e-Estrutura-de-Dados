#include <stdio.h>

int busca(int* list, int num, int size){
    int i = 0; //variavel que usada no while
    list[size+1] = num; //colocando o sentinela 

    while(list[i] != num){ //percorro o vetor list até achar um list[i] igual ao valor que estou buscando
        i++;
    }
    
    if(i == (size+1)){ //se o valor de i for igual a size+1 (indice onde foi inserido o sentinela)
        return 0; // o valor nao estava na lista
    }
    return 1; // o valor estava na lista
}

void inserir(int* list, int num, int *size, int maxSize){

    int search = busca(list,num, *size);

    if(*size<maxSize){ //se o tamanho for igual ao tamanho maximo
        if(search == 0 ){ //busca retornou 0
            list[*size] = num; //jogo o valor primeira posição vazia
            (*size)++; //incremento o tamanho anteriormente passado
        }
        else{
            printf("esse valor ja existe em sua lista\n");
        }
    }
        else{
            printf("sua lista ja esta cheia\n");
        }
}

int main(){
    int list[10] = {2,4,6,8};
    int size = 4;

    inserir(list,10, &size,10); // o uso do & serve para que a função inserir possa acessar o endereço da variavel size e mude o valor contido no endereço
    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }

    printf("\n");

    inserir(list,12,&size,10);
    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }

    printf("\n");

    inserir(list,1,&size,10);
    for(int c = 0; c < size; c++){
        printf("%d, ",list[c]);
    }

    printf("\n");
    return 0;
}