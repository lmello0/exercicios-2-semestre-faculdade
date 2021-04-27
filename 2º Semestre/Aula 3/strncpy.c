#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 50, num;
    char string[TAM], string2[TAM];

	printf("\n");
    printf("String: ");
    scanf("%[^\n]", string);
    printf("Quer copiar a partir de qual num de letra? ");
    scanf("%d", &num);

    for(int i = num; i < TAM; i++){
        string2[i - num] = string[i - 1];
    }
	
	printf("\n--- RESULTADO ---\n\n");
    printf("String 1: %s\nString 2: %s", string, string2);
    printf("\n\n-----------------");
}
