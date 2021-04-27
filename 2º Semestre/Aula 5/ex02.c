#include <stdio.h>
#include <stdlib.h>

int main(){
    float num;
    float *ptrNum = &num;

    printf("Numero: ");
    scanf(" %f", ptrNum);

    printf("--------------- ANTES ---------------\n");
    printf("Conteudo: %.2f | Endereco: %u", *ptrNum, ptrNum);

    ptrNum++;

    printf("\n--------------- DEPOIS --------------\n");
    printf("Conteudo: %.2f | Endereco: %u", *ptrNum, ptrNum);
    printf("\n-------------------------------------");
}

//Acontece pq o conteudo ta em outro endereço de memória