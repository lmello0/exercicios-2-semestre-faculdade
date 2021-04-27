#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string1[30];
    char string2[30];

    printf("String 1: ");
    gets(string1);

    strcpy(string2, string1);
    printf("\n\nString 1: %s", string1);
    printf("\nString 2: %s",string2);
}