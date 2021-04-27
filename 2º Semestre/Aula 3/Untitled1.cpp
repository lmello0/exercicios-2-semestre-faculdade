#include <stdio.h>
#include <stdlib.h>

int main() {
    char *nomes[10];

    for(int i = 0; i < 10; i++){
        printf("Nome %d: ", i+1);
        scanf(" %s", nomes+i);
    }

    printf("\n\n");

    for(int i = 0; i < 10; i++){
        printf("Nome %d: %s\n", i+1, &nomes[i]);
    }
}
