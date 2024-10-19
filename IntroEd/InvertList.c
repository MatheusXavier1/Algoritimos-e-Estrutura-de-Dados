#include <stdio.h>

int main(){
    
    int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size_list = sizeof(list)/4;
    //printf("%d",size_list);
    for(int i = 0; i < size_list/2; i++){
        int temp;
        temp = list[i];
        list[i] = list[(size_list-1)-i];
        list[(size_list-1)-i] = temp;
    }

    for(int k = 0; k < size_list; k++){
        printf("%d\n",list[k]);
    }
    
    return 0;
}