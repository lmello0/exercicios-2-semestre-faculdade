#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int TAM = 100;
    char string1[TAM], string2[TAM], string3[TAM], string1Old[TAM], string3Old[TAM];

    printf("String 1: ");
    scanf("%[^\n]", string1);
    fflush(stdin);
    printf("String 2: ");
    scanf("%[^\n]", string2);
    fflush(stdin);
    printf("String 3: ");
    scanf("%[^\n]", string3);

    strcpy(string1Old, string1);
    strcat(string1, string2); // = string1
    strcpy(string3Old, string3);
    strcat(string1, string3);

    printf("\n---- RESULTADO ----\n\n");
    printf("String 1: %s\n", string1Old);
    printf("String 2: %s\n", string2);
    printf("String 3: %s\n", string3Old);
    printf("String concatenada: %s", string1);
}