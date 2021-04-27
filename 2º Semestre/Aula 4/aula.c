#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);

int main()
{
    int n1, n2;
    int resultado;

    printf("Digite dois numeros para serem somados: ");
    scanf("%d %d", &n1, &n2);
    resultado = soma(n1, n2);

    printf("O valor da soma eh: %d", resultado);
    return 0;
}

int soma(int a, int b)
{
    int soma;
    soma = a + b;
    return soma;
}