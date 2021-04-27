#include <stdio.h>

int main(){
	int matriz[5][5];
	
	for(int i = 0; i < 5; i++){
		printf("\n");
		for(int j = 0; j < 5; j++){
			if (i != j){
				printf("\t| 0 |");
			} else {
				printf("\t| 1 |");
			}
		}
	}
}
