#include <stdio.h>
#include <stdlib.h>

float novoPreco(float valor, float percentual){
    float preco;
    percentual = percentual/100;
    preco = valor - (valor * percentual);
    return preco;
}

int main(){
    float preco, porcento, novoValor;

    printf("Preco do produto: ");
    scanf("%f", &preco);

    printf("Percentual de desconto: ");
    scanf("%f", &porcento);

    novoValor = novoPreco(preco, porcento);

    printf("\n---------- RESULTADO ----------\n");
    printf("Valor original: %.2f\nDesconto: %.2f%%\nValor com desconto: %.2f", preco, porcento, novoValor);
    printf("\n-------------------------------");
}