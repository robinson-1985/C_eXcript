#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 40;
    int condicao = (i > 20) && (i<100);

    printf("%i\n", condicao);
    printf("%i\n", !condicao);

    // || condidicão OU
    // (true || false) -> 1 
    // (true || true)  -> 1
    // (true || true)  -> 1
    // (false || false)-> 0

    int x = 10;
    int cond = 0;

    cond = (x == 10 || x < 1); //true
    printf("%i\n", cond);

    cond = (x == 10 || x != 1000); //true
    printf("%i\n", cond);

    cond = (x == 10 || x != 0); // true
    printf("%i\n", cond);

    cond = (x != 10 || x == 0); //false
    printf("%i\n", cond);

    return 0;
}