#include <stdio.h>

void search(int x, int *list){
    int n = sizeof(list)/list[0], i = 0;
    list[n+1] = x;

    while(list[i] != x){
        i++;
    }
    if(i == n+1){
        printf("%d nao pertence a sua lista",x);
    }
    else{
        printf("%d esta na sua lista na posicao %d",x,i+1);
    }

}

int main(){
    int arr[] = {1,5,2,4,7};
    int x = 8;
    search(x,arr);
}