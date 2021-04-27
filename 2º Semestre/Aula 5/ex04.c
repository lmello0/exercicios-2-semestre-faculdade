#include <stdio.h>
#include <stdlib.h>

int main() {
    int y, *p, x;

    // Y = 0
    y = 0;
    
    // P = endereço de memória de Y
    p = &y;
    
    // X = conteudo de P
    x = *p;

    // X = 4 -> conteudo de P = 4
    x = 4;

    // conteudo de P++ -> 4++ = 5
    (*p)++;

    // X = 4
    x--;

    // p = 4 + 4 = 8
    (*p) += x;

    //
    printf("Y = %d\n", y);
}