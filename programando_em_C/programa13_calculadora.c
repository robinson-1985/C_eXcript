#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao, divisao;

    printf("Calculadora 1.0\n");
    printf("Entre os dois números a serem processados: \n");
    scanf("%i%i", &num1, &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao =num1 * num2;
    divisao = num1 / num2;

    printf("A soma é: %i\n", soma);
    printf("A subtracao é: %i\n", subtracao);
    printf("A multiplicacao é: %i\n", multiplicacao);
    printf("A divisao é: %i\n", divisao);


    return 0;
}