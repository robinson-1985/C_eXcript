#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Digite uma letra entre A até G: ");
    char caracteres = 0;
    scanf("%c", &caracteres);
    int codigo = 0;

    switch ((caracteres))
    {
    case 'A':
        codigo = 65;
        break;

    case 'B':
        codigo = 66;
        break;

    case 'C':
        codigo = 67;
        break;

    case 'D':
        codigo = 68;
        break;

    case 'E':
        codigo = 69;
        break;

    case 'F':
        codigo = 70;
        break;

    case 'G':
        codigo = 71;
        break;
    
    default:
        codigo = -1;
    }

// o código abaixo é igual a condição switch acima, porém, fizemos concatenação.
    codigo = (caracteres == 'A') ? 65:
             (caracteres == 'B') ? 66:
             (caracteres == 'C') ? 67:
             (caracteres == 'D') ? 68:
             (caracteres == 'E') ? 69:
             (caracteres == 'F') ? 70:
             (caracteres == 'G') ? 71: -1;

    printf("O código ASCII da letra digitada é: %i\n", codigo);

    return 0;
}