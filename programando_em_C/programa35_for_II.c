#include <stdio.h>
#include <stdlib.h>

int main() {
    /* 
    for(parte1; parte2; parte3){

        parte1 -> início;

        parte2 -> condição;

        parte3 -> atualização; 

    }
    */

   for(int a = 0, b = 10; a <= 10; a++, b--){
       printf("%d ", a);
       printf("-");
       printf("%d\n", b);
    }

    return 0;
}