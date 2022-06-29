#include <stdio.h>

int main() {

    int numero, vezes, i;

    scanf("%d%d", &numero, &vezes);

    if ((numero % 2) != 0) printf("O PRIMEIRO NUMERO NAO E PAR\n");
    else {
        for(i = vezes; i > 0; i--) {
            printf("%d ", numero);
            numero += 2;
        }
        printf("\n");
    }


    return 0;
}