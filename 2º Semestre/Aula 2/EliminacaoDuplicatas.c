#include <stdio.h>
#include <locale.h>

int main()
{
    int TAM = 20;
    int indice = 0;
    int numeros[TAM];
    
    for (int i = 0; i < TAM; i++)
    {
        int numeroLido;
        do
        {
            printf("Digite um valor entre 20 e 40: ");
            scanf("%d", &numeroLido);
        } while (numeroLido < 20 || numeroLido > 40);
        int verifica = 0;
        for (int j = 0; j < indice; j++)
        {
            if (numeros[j] == numeroLido)
            {
                verifica = 1;
            }
        }
        if (verifica == 0)
        {
            numeros[indice++] = numeroLido;
        }
    }
    for (int i = 0; i < indice; i++)
    {
        printf("| %d |", numeros[i]);
    }
}