	#include <stdio.h>

	void BuscaOrd(int data, int *list){
		int n = sizeof(list)/4, i = 0;
		list[n+1] = data; // sentinela
		
		while(list[i] < data){
			i++;    
		}
		if(i<=n){
					if(list[i] == data){
						printf("achei %d em %d",data,i);
					}
					if(list[i]!= data){
						printf("nao tem %d em sua lista",data);
					}
		}
	}

	int main(){
		
		int arr[] = {2,5,7,10,11,15};
		BuscaOrd(11,arr);

		return 0;
	}