#include <stdio.h>

int main()
{
    int TAM = 50, cont = 0;
    char string[TAM];

	printf("\n\n");
    printf("Digite uma palavra ou frase: ");
    scanf("%[^\n]", string);

    for(int i = 0;i < TAM;i++){
        if(string[i] == '\0'){
            break;
        } else {
            cont++;
        }
    }

    printf("\nCaracteres string: %d", cont);
    printf("\n");
}
