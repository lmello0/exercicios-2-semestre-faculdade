#include <stdio.h>

int main(){
	int matriz[5][10];
	
	for(int i = 0;i < 5; i++){
		for(int j = 0;j < 10; j++){
			matriz[i][j] = j*j;
		}
	}
	
	for(int i = 0; i < 5; i++){
		printf("\n");
		for(int j = 0; j < 10; j++){
			printf("\t | %d |", matriz[i][j]);
		}
	
}
}
