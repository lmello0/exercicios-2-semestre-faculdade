#include <stdio.h>
#include <stdlib.h>

void quadrado(int *valor);

int main() {
    int numero;
    printf("Digite o valor: ");
    scanf("%d", &numero);

    quadrado(&numero);

    printf("Numero ao quadrado: %d", numero);
}

void quadrado(int *valor) {
    *valor = *valor * *valor;

}