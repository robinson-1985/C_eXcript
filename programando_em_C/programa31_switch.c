#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
        switch(expressao){
        case(expressao-cost):
            break;
        case(true):
            break;
        default:
            // não há necessidae de colocarmos um break;
        }
    */

    printf("Digite um valor entre 0 e 9:\n");
    int i;
    scanf("%i", &i);

   switch(i) {
    case 0:
        printf("A opção digitada foi 'zero'!\n ");
        break;

    case 1:
        printf("A opção digitada foi 'um'!\n ");
        break;

    case 2:
        printf("A opção digitada foi 'dois'!\n ");
        break;

    case 3:
        printf("A opção digitada foi 'três'!\n ");
        break;

    case 4:
        printf("A opção digitada foi 'quatro'!\n ");
        break;

    case 5:
        printf("A opção digitada foi 'cinco'!\n ");
        break;

    case 6:
        printf("A opção digitada foi 'seis'!\n ");
        break;

    case 7:
        printf("A opção digitada foi 'sete'!\n ");
        break;

    case 8:
        printf("A opção digitada foi 'oito'!\n ");
        break;

    case 9:
        printf("A opção digitada foi 'nove'!\n ");
        break;

    default:
        printf("Opção default!\n ");
   }

    return 0;
}