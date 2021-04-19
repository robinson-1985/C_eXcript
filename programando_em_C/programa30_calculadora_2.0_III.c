#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, resultado;
    char op = '0';

    do{
        num1 = num2 = resultado = 0; 
        
        //imprimindo as opções da calculadora 
        printf(" (1) somar \n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) sair do programa\n");

        printf("\nInforme a operação:\n");
        printf("\t\t\t>>>");

        op = getchar();
        printf("\n");

        if(op != '0'){
            printf("Digite o primeiro número:\n");
            scanf("%f", &num1);
            printf("Digite o segundo número:\n");
            scanf("%f", &num2);

            if(op == '1'){
                resultado = num1 + num2;
            }
                else{
                    if(op == '2'){
                        resultado = num1 - num2;
                    }
                    else{
                        if(op == '3'){
                            resultado = num1 * num2;
                        }
                        else{
                            if(op == '4'){
                                resultado = num1 / num2;
                            }
                        }
                    }
                }
            }
        printf("\nO resultado é: %f\n", resultado);

        // system("pause"); //aqui para o programa;

        printf("\nPressione enter para realizar uma nova operação: ");
        system("cls"); // aqui limpa a tela.
    }

    while( op != '0');

    return 0;
}