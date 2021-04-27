#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int vetor1[8],vetor2[8];
	srand(time(NULL));
	
	for(int i = 0;i < 8;i++){
		vetor1[i] = rand() % 99;
		vetor2[i] = vetor1[i] * 3;
	}
	
	printf("VETOR 1: ");
	for(int i = 0;i < 8;i++){
		if(i == 7){
			printf("| %3d |", vetor1[i]);
		} else {
			printf("| %3d ", vetor1[i]);
		}
	}
	printf("\nVETOR 2: ");
	for(int i = 0;i < 8;i++){
		if(i == 7){
			printf("| %3d |",vetor2[i]);
		} else {
			printf("| %3d ",vetor2[i]);
		}
	}
}
