#include <stdio.h>

int List[] = {5,2,7,1,0,8};


int main(){
    for(int k = 0; k < 7; k++){
        printf("%d,",List[k]);
    }

    printf("\n");

    for(int i = 0; i <= 6/2; i++){
        int temp;
        temp = List[i];
        List[i] = List[6-i];
        List[6-i] = temp;

    }

    for(int k = 0; k < 7; k++){
        printf("%d,",List[k]);
    }
    return 0;
}