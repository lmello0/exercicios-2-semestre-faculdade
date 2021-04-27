#include <stdio.h>
#include <stdlib.h>

void converte(int *hora, int *minutos, int minutosTotal);

int main() {
    int minutos, hora, minutosTotal;

    printf("Quantos minutos? ");
    scanf("%d", &minutosTotal);

    converte(&hora, &minutos, minutosTotal);

    printf("Hora: %dh\nMinutos: %dmin", hora, minutos);
}

void converte(int *hora, int *minutos, int minutosTotal){
    *hora = minutosTotal/60;
    *minutos = minutosTotal % 60;
}