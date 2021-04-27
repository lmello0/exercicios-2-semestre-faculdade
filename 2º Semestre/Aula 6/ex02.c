#include <stdio.h>
#include <stdlib.h>

void converte(int hora, int minutos, int *minutosTotal);

int main() {
    int hora, minutos, minutosTotal;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    converte(hora, minutos, &minutosTotal);

    printf("Hora: %dh\nMinutos: %dmin\nMinutos totais: %dmin", hora, minutos, minutosTotal);
}

void converte(int hora, int minutos, int *minutosTotal) {
    hora = hora * 60;
    *minutosTotal = hora + minutos;
}