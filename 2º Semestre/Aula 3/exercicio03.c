#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int TAM = 50, letraA = 0;
    char palavra[TAM];

    printf("Digite a palavra: ");
    scanf("%[^\n]", palavra);

    for(int i = 0; i < TAM; i++){
        if(palavra[i] == '\0'){
                break;
            }
        if(palavra[i] == 'a' || palavra[i] == 'A' ){
            letraA++;
        }
    }

    printf("Palavra: %s\nLetra A: %d", palavra, letraA);
}