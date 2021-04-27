#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 10;
//    char letra = 'a';
//    float pi = 3.14;

    int *ponteiroNumero = NULL;
    ponteiroNumero = &numero;

    *ponteiroNumero = 15;

    printf("Variavel: %d | Ponteiro: %d", numero, *ponteiroNumero);

/*    char *ponteiroLetra = NULL;
    ponteiroLetra = &letra;

    float *ponteiroPi = NULL;
    ponteiroPi = &pi;

    printf("Numero: %d | Variavel: %x | Memoria: %x\n", *ponteiroNumero, ponteiroNumero, &ponteiroNumero);
    printf("Numero: %c | Variavel: %x | Memoria: %x\n", *ponteiroLetra, ponteiroLetra, &ponteiroLetra);
    printf("Numero: %.2f | Variavel: %x | Memoria: %x", *ponteiroPi, ponteiroPi, &ponteiroPi); */

    // * retorna o conteudo
    // & retorna o endereço

}