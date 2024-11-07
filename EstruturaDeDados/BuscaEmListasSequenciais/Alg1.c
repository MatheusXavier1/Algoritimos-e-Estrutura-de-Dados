#include <stdio.h>

void busca(int *list, int num, int size){
    int i = 0;
    while(i < size){
        if(list[i] == num){
            printf("o numero %d esta na posicao %d",num,i);
            return;
        }
            i++;
    }
    printf("o valor nao foi encontrado");
}

int main(){

int arr[] = {1,2,4,6,7};
int size = sizeof(arr)/sizeof(arr[0]);

busca(arr,4,size);

return 0;
}