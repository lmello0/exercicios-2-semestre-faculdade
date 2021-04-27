#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavra[10] = "1516";
    int num = atol(palavra);
    printf("%s, %d", palavra, num);
}
