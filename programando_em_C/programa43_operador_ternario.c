/* Operação ternária é uma estrutura condicional simplificada.

Modelo da expressão ternária -> expressão? valorTrue: valorFalse;
<variável> = () ? <valor1> : <valor2>;

Que fica assim:

<variável> = (true) ? <valor1> SENÃO <valor2>;

Exemplo: num = (true) ? 20 : 10;

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, num2;

    printf("Informe um número: ");
    scanf("%d", &num);

//   if(num < 0)
//        num2 = 0;
//   else
//        num2 = num;

    // a nossa variável num2 deve receber a condição e retornar zero se for 
    // menor que zero, se não o valor for maior que zero será retornado o valor 
    // da variável num.  
    num2 = (num < 0) ? 0 : num;

    printf("\nO valor de num2 é: %d \n", num2);

    return 0;
}