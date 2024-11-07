#include <stdio.h>

int FatIterativo(int x){
    if(x == 0){
        return 1;
    }
    else{
    int n = x;
    for(int i = 1; i<x; i++){
        n = n*(x-i);
    }
    return n;
    }
}
int main(){
    int num = 3;
    int result = FatIterativo(num);
    printf("%d",result);

    return 0;
}

