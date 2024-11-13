 #include <stdio.h>
 
 void BubbleSort(int* list, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(list[j]>list[j+1]){
                int temp = list[j+1];
                list[j+1] = list[j];
                list[j] = temp;
                for(int i = 0; i < 7; i++){
                    printf("%d, ",list[i]);
                }
                printf("\n");
            }
        }
    }
 }

int main(){
    int list[] = {20,13,17,-9,4,8,12};

    BubbleSort(list,7);


    return 0;
}