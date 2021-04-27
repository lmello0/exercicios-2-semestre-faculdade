#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int menor(int a[]);

int main(){
    int num[TAM], i, menorValor;

    for(i = 0; i < TAM; i++){
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    menorValor = menor(num);

    printf("Menor valor: %d", menorValor);
}

int menor(int a[]){
    int i, menor = a[0];

    for(i = 0; i < TAM; i++){
        if(a[i] < menor){
            menor = a[i];
            
        }
    }
    return menor;
}