#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    char string1[100];
    char string2[100];

    printf("String1: ");
    gets(string1);
    fflush(stdin);
    printf("String2: ");
    gets(string2);

    int igual = strcmp(string1, string2);
    printf("-------------------------\n");
    if (igual == 0)
    {
        printf("Strings iguais: \n\nString1: %s\nString2: %s", string1, string2);
    }
    else if (igual > 0)
    {
        printf("A string 1 eh maior que a 2: \n\nString1: %s\nString2: %s", string1, string2);
    }
    else if (igual < 0)
    {
        printf("A string 2 eh maior que a 1: \n\nString1: %s\nString2: %s", string1, string2);
    }
    printf("\n-------------------------\n\n");
}