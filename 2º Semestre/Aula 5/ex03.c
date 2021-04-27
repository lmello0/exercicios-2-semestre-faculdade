#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    int *ptrNum1 = &num1, *ptrNum2 = &num2;

    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("\n------------------------------------------\n");
    if(*ptrNum1 == *ptrNum2){
        printf("Numero 1: %d | Numero 2: %d\n", *ptrNum1, *ptrNum2);
        printf("Iguais");
    } else {
        printf("Numero 1: %d | Numero 2: %d\n", *ptrNum1, *ptrNum2);
        printf("Diferentes");
    }
}

//*ptrNum1 = *ptrNum2
//ptrNum1 = ptrNum2