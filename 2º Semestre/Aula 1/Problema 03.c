#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, sub = 1;
	int raiz, resultado = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	raiz = num;
	for(int j = 1;j <= num;j++){
		raiz -= sub;
		if(raiz >= 0){
			resultado++;
		} else if(raiz < 0){
			break;
		}
		sub += 2;
		
	}
	
	printf("Raiz: %d", resultado);
}
