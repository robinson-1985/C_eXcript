#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    printf("%i\n", &i);
    printf("%i\n", ++i);
    i++;
    printf("%i\n", i);

    system("cls");

    int i2 = 5;
    printf("%i\n", i2);
    printf("%i\n", --i2);
    printf("%i\n", i2--);
     i2--;
    printf("%i\n", i2);

    /* 

    1) Incremento\
    ----------------> Pré ou Pós
    2)Decremento\

    Pré -> o valor será incrementado/decrementado na instrução 
           que a variável estiver contida

    Pós -> o valor será incrementado/decrementado na próxima
           instrução; 
    
    */

   int x = 0;
   x = x + 1;// incrementar quantas unidades desejarmos;
   x += 1; // incrementar quantas unidades desejarmos
   ++x;// op. incremento, só podemos incrementar uma única unidade.

   printf("%i\n", x);

    return 0;
}