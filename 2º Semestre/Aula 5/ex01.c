#include <stdio.h>
#include <stdlib.h>

int main(){
    char caractere;
    int *ptrCaractere = &caractere;

    printf("Caractere: ");
    scanf(" %c", ptrCaractere);

    printf("Conteudo: %c\nEndereco: %u", *ptrCaractere, ptrCaractere);
}