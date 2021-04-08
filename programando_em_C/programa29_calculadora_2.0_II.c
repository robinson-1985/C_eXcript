#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


int main() {
    float num1, num2, resultado;
    char op = '0';

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
        op = getche();
        printf("\n\n");


        if(op != '0'){
            printf("Digite o primeiro número:\n");
            scanf("%f", &num1);
            printf("Digite o segundo número:\n");
            scanf("%f", &num2);

            if(op == '1');
        
        }
        

        


        

        
    }

    while( op != '0');

    return 0;
}