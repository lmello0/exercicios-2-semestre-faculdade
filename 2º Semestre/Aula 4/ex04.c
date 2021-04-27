#include <stdio.h>
#include <stdlib.h>

float calcula(float a, float b, char op);

int main(){
    float num1, num2, resultado;
    char operacao;

    printf("Digite uma conta [ + | - | * | / ]: ");
    scanf("%f %c %f", &num1, &operacao, &num2);

    resultado = calcula(num1, num2, operacao);

    printf("Resultado: %.2f", resultado);
}

float calcula(float a, float b, char op){
    float resultado;
    if(op == '+'){
        resultado = a + b;
    }
    if(op == '-'){
        resultado = a - b;
    }
    if(op == '*'){
        resultado = a * b;
    }
    if(op == '/'){
        resultado = a / b;
    }
    return resultado;
}