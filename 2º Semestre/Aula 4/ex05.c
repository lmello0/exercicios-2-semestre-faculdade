#include <stdio.h>
#include <stdlib.h>

int function(int a);

int main(){
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numeros pares: %d", function(num));
}

int function(int a){
    int i, par = 0;
    for(i = 1; i <= a; i++){
        if(i % 2 == 0){
            par++;
        }
    }

    return par;
}