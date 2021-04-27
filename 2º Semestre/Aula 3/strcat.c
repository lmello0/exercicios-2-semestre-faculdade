#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 50, cont = 0;
    char string1[TAM], string2[TAM], string1Old[TAM];

    printf("String 1: ");
    scanf("%[^\n]", string1);
    fflush(stdin);
    printf("String 2: ");
    scanf("%[^\n]", string2);

    for(int i = 0; i < TAM; i++){
        string1Old[i] = string1[i];
        if(string1 == '\0'){
            break;
        }
    }

    for(int i = 0; i < TAM; i++){
        if(string1[i] != '\0')
        {
            cont++;
        } else if(string1[i] == '\0'){
            break;
        }
    }
    for(int i = cont; i < TAM; i++){
        string1[i] = string2[i - cont];
    }

    printf("\n----------------------------------\n");
    printf("String 1: %s\n", string1Old);
    printf("String 2: %s\n", string2);
    printf("String concatenada: %s\n", string1);
    printf("----------------------------------\n");
}
