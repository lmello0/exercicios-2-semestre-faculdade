#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 50, found;
    char palavra[TAM], caracter;

    printf("--- Character Finder ---\n");
    printf("Word: ");
    scanf("%[^\n]", palavra);
    printf("Character: ");
    scanf(" %c", &caracter);
    printf("------------------------\n\n");

    for(int i = 0; i < TAM; i++){
        if(palavra[i] == caracter){
            found = i;
            break;
        }
    }

    printf("----- RESULTS -----\n");
    printf("Palavra: %s\n", palavra);
    printf("Caracter: %c\n", caracter);
    printf("Posicao encontrada: %d", found + 1);
    printf("\n-------------------");

}