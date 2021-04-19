#include <stdio.h>
#include <stdlib.h>


int main() {
    float num1, num2, resultado;
    char operacao = '0';

    do{
        num1, num2, resultado = 0; 
        
        //imprimindo as opções da calculadora 
        printf(" (1) somar \n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n");
        printf(" (0) sair do programa\n");

        printf("Informe a operação: \n");
        printf("\t\t\t>>>");
        operacao = getchar();
        printf("\n\n");


        if(operacao != '0'){
            printf("Digite o primeiro número:\n");
            scanf("%f", &num1);
            printf("Digite o segundo número:\n");
            scanf("%f", &num2);

            if(operacao == '1'){
                resultado = num1 + num2;
            }
                else{
                    if(operacao == '2'){
                        resultado = num1 - num2;
                    }
                    else{
                        if(operacao == '3'){
                            resultado = num1 * num2;
                        }
                        else{
                            if(operacao == '4'){
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

    while( operacao != '0');

    return 0;
}