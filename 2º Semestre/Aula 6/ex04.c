#include <stdio.h>
#include <stdlib.h>

void soma(int vet[], int tam, int *ret);

int main() {
    int tam = 10;
    int vet[tam], ret;

    for(int i = 0; i < tam; i++) {
        int num;
        printf("Valor %d: ", i+1);
        scanf("%d", &num);

        vet[i] = num;
    }

    soma(vet, tam, &ret);

    printf("Soma do vetor: %d", ret);
}

void soma(int vet[], int tam, int *ret) {
    *ret = 0;
    for(int i = 0; i < tam; i++) {
        *ret = *ret + vet[i];
    }
}