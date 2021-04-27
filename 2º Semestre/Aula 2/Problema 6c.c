#include <stdio.h>

int main(){
	int	matriz[6][5];
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 5; j++){
			matriz[i][j] = i;
		}
	}
	
	for(int i = 0; i < 6; i++){
		printf("\n");
		for(int j = 0; j < 5; j++){
			printf("\t | %d |", matriz[i][j]);
		}
	}
}
