#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int matriz[4][5];
	srand(time(NULL));
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			matriz[i][j] = 1 + rand() % 100;
		}
	}
	
	for(int linha = 0; linha < 4; linha++){
		printf("\n");
		for(int coluna = 0; coluna < 5; coluna++){
			printf("\t| %d |", matriz[linha][coluna]);
		}
	}
}
