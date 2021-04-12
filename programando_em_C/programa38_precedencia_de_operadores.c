#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 
        1        Funções
        2         ()
        3        -, ++, --, !
        4        *, /, %
        5         +, -
        6        <, <=, >, >=
        7          ==, !=
        8          ?: (ternária)
    
    */

   int a, b, c;
    a = 15;
    b = 10;
    c = 5;

    float x = 0;

    x = a * b / c;
    printf("Expressão: a * b / c = %f\n", x);

    x = a / b * c;
    printf("Expressão: a / b * c = %f\n", x);

    x = a + b * c;
    printf("Expressão: a + b * c = %f\n", x);

    x = a * b + c;
    printf("Expressão: a * b + c = %f\n", x);

    x = (a * b) + c;
    printf("Expressão: (a * b) + c = %f\n", x);

    x = a * (b + c);
    printf("Expressão: a * (b + c) = %f\n", x);

    return 0;
}