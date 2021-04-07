#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    printf("Digite o número 1: \n");

    char c;
    c = getchar();

    if(c == '1'){
        printf("O caracter digitado está correto! \n");
    }

    else{
        printf("O valor digitado é inválido! \n");
        printf("Você digitou o caracter >%c<.\n", c);
    }

    return 0;
}