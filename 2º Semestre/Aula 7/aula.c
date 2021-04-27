#include <stdio.h>
#include <stdlib.h>

void soma(int vet[], int tam, int *ret);

/* Vetor ponteiro
void main() {
    int numeros[5] = {5, 4, 3, 2, 1};
    int *ptrNumero;
    ptrNumero = numeros;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf(" %d", ptrNumero+i);
    }

    for(int i = 0; i < 5; i++){
        printf("| %d ", *(ptrNumero + i));
    }
} 
*/

/* Vetor string
void main() {
    char *naipes[4] = {"Copas", "Ouros", "Paus", "Espadas"};

    for(int i = 0; i < 4; i++){
        printf("%s | ", naipes[i]);
    }
} */

/* Ponteiro para ponteiro
void main(){
    int numero = 10;
    int *ptrNivel = &numero;
    int **ptrNivel2 = &ptrNivel;
    int ***ptrNivel3 = &ptrNivel2;

    printf("Nivel 2: %d\nNivel 1: %d\nVariavel: %d", *ptrNivel3, **ptrNivel3, ***ptrNivel3);
} */

