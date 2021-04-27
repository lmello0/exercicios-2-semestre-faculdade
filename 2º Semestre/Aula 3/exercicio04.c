#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int TAM = 50, vogal = 0;
    char frase[TAM];

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    for (int i = 0; i < TAM; i++)
    {
        if (frase[i] == '\0')
        {
            break;
        }
        if ((frase[i] == 'A' || frase[i] == 'a') || (frase[i] == 'E' || frase[i] == 'e') || (frase[i] == 'I' || frase[i] == 'i') || (frase[i] == 'O' || frase[i] == 'o') || (frase[i] == 'U' || frase[i] == 'u'))
        {
            vogal++;
        }
    }

    printf("\nFrase: %s\nQuantidade de vogais: %d", frase, vogal);
}