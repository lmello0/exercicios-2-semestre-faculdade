#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int vetor[10], maior, menor;
	srand(time(NULL));
	
	printf("VETOR: ");
	for(int i = 0;i < 10;i++){
		vetor[i] = 1 + rand() % 50;
		if(i == 9){
			printf("| %2d |", vetor[i]);
		} else {
			printf("| %2d ", vetor[i]);
		}
	}
	
	maior = vetor[0];
	menor = vetor[0];
	
	for(int i = 0;i < 10;i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		} else if(vetor[i] < menor){
			menor = vetor[i];
		}
	}
	
	printf("\n\nMaior: %d", maior);
	printf("\nMenor: %d", menor);
}
