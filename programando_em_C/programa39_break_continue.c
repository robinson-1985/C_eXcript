#include <stdio.h>
#include <stdlib.h>

int main() {
    // break -> simplesmente interompe o nosso ciclo;
    // continue -> interrompe o nosso laço;

    for(int x = 0; x <= 10; x++){

        if(x == 2){ // quando x == 20, interrompa somente o laço atual. 
            printf("-\n", x);
            continue;
        }

        if( x == 8){ // quando chegarmos a 80 o looping será finalizado.
            printf("-\n", x);
            break;
        }

        printf("%i\n", x);
    } 
    
    return 0;
}