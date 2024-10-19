#include <stdio.h>
int fat(int i){
    if(i == 0){ //Por convencão, sabe-se que 0! é igual a 1.
        return 1;
    }
    else{
        return i * fat(i-1);
    }
}
int main(){
    int num = 5;
    printf("%d",fat(num));

    return 0;
}