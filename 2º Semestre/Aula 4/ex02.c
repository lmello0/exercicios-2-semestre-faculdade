#include <stdio.h>
#include <stdlib.h>

int ffatorial(int a);

int main(){
    int num, fatorial;

    printf("Digite um numero: ");
    scanf("%d", &num);
    fatorial = ffatorial(num);

    printf("%d! = %d", num, fatorial);
}

int ffatorial(int a){
    int fat;
    for(fat = 1;a > 1; a--){
        fat = fat * a;
    }
    return fat;
}