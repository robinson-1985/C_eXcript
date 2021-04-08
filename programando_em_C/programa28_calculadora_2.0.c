#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
    double num1, num2, resultado;
    char op = '0';

    do{
        num1 == num2 == resultado == 0;  // resetar as variáveis
        // abaixo imprime as opções da calculadora:
        printf(" (1) somar \n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");

        printf("Informe a operação: \n");
        op = getchar();

        
        printf("Digite o primeiro número:\n");
        scanf("%f", &num1);
        printf("Digite o segundo número:\n");
        scanf("%f", &num2);
    }

    while( op == '0');



    return 0;
}