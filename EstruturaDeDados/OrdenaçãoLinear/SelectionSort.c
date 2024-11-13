#include <stdio.h>

void SelectionSort(int* list, int size){
    for(int i = 0; i < size; i++){
        int menor = i;
        for(int j = i+1; j < size; j++){
            if(list[j]<list[menor]){
                menor = j;
            }
        }
        int aux = list[i];
        list[i] = list[menor];
        list[menor] = aux;
    }

}