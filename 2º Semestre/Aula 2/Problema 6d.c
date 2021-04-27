#include <stdio.h>

int main(){
	int matriz[9][6];
	
	for(int i = 0; i < 9; i++){
		for(int j = 0;j < 6; j++){
			if(i % 2 == 0){
				matriz[i][j] = -1;
			} else{
				matriz[i][j] = 0;
			}
		}
	}
	
	for(int i = 0; i < 9; i++){
		printf("\n");
		for(int j = 0;j < 6; j++){
			printf("\t | %2d |", matriz[i][j]);
		}
	}
}
