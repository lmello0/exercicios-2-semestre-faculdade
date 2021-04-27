#include <stdio.h>
#include <string.h>

void inverso(char string[]);

int main() {
    char string[100];

    printf("Digite algo: ");
    scanf("%[^\n]", &string);

    printf("String original: %s\n", string);
    inverso(string);
}

void inverso(char string[]) {
    char stringInversa[100], *ptrStringInversa;
    int tamString = 0;

    tamString = strlen(string);
    ptrStringInversa = string + tamString - 1;

    for(int i = 0; i < tamString; i++) {
        //atribui o conteudo da string original ao conteúdo do ponteiro da string inversa
        stringInversa[i] = *ptrStringInversa;
        ptrStringInversa--;
    }

    printf("String inversa: ");
    for(int i = 0; i < tamString; i++){
        printf("%c", stringInversa[i]);
    }
} 