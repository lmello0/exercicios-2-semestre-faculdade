#include <stdio.h>
#include <stdlib.h>

int fib(int a);

int main(){
    int num;

    printf("Numero: ");
    scanf("%d", &num);

    printf("%d", fib(num));
}

int fib(int num){
    int t1, t2, i = 0, termo;
    t1 = 0;
    t2 = 1;

    do{
        termo = t1 + t2;
        t1 = t2;
        t2 = termo;
        i++;
    }while(i <= num - 3);
    return termo;
}