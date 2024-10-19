#include <stdio.h>

int removeflor(int n){
    if(n == 0){
        printf("0");
        return 0;
    }
    else{
        printf("%d, ",n);
        removeflor(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    removeflor(n);
    return 0;
}