#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso, altura, alturaTotal, pesoTotal, imc;
	int pessoas = 0;
	
	do{
		do{
			printf("Altura: ");
			scanf("%f", &altura);
			if((altura < 0.5 || altura > 2.3) && altura != 0){
				printf("Valor inv�lido!");
				printf("\n\n");
			}
			alturaTotal += altura;
		}while((altura < 0.5 || altura > 2.3) && altura != 0);
		if(altura == 0){
			break;
		}	
		do{
			printf("Peso: ");
			scanf("%f", &peso);
			if(peso < 40 || peso > 180){
				printf("Valor inv�lido!");
				printf("\n\n");
			}
			pesoTotal += peso;
		}while(peso < 40 || peso > 180);
		printf("\n");
		pessoas++;
	}while(altura != 0);
	
	imc = (pesoTotal/pessoas)/pow((alturaTotal/pessoas), 2);
	printf("\n----- RESULTADOS -----\n");
	printf("Pessoas: %d\n", pessoas);
	printf("IMC M�dio: %.2fkg/m�\n", imc);
	printf("Altura m�dia: %.2fm\n", alturaTotal/pessoas);
	printf("Peso m�dio: %.2fkg\n", pesoTotal/pessoas);
	
}
