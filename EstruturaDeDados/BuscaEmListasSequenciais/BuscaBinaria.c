/*
inf = marca o inicio
sup = marca o fim

meio =  posição do elemento a ser comparado (meio da lista)

*/
#include <stdio.h>

int buscaBin(int num, int *list, int size){
    int inf = 1;
    int sup = size;
    while(inf <= sup){
            int meio = (inf+sup)/2;
            if(list[meio] == num){
                return meio;
            }
            else if (list[meio] < num)
            {
                inf = meio+1;
            }
            else
            {
                sup = meio-1;
            }
    }
    
    return -1;
}

int main(){

    int list[10] = {1,2,3,4,5,6,7,8};
    int t = buscaBin(4,list,10);

    printf("%d",t);
    return 0;
}