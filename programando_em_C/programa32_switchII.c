#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Digite um valor entre 0 e 9:\n>>>");
    int i;
    scanf("%i", &i);

   switch(i) {
    case 0:
        printf("\n'zero'!\n ");
        break;

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("\nVocê digitou um número entre 1 e 5\n");
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
        /* A nossa instrução default será executada caso:
        1) nenhum item seja satisfatório;
        2) não haja a instrução break;

        */
   }

    return 0;
}