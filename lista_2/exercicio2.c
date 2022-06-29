#include <stdio.h>

int main() {

    int numero, vezes, i, numero2;
    scanf("%d", &numero);
    vezes = numero / 2;
    numero2 = 2;
    
    for (i = vezes; i > 0; i--) {

        printf("%d^2 = %d\n", numero2, numero2 * numero2);
        numero2 += 2;
    }


    return 0;
}