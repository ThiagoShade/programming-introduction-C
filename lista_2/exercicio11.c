#include <stdio.h>
#include <stdlib.h>

int main() {

    int maior, a, a_transformado, b, b_transformado, vezes;
    scanf("%d", &vezes);
    for (vezes; vezes > 0; vezes--) {
        scanf("%d%d", &a, &b);

        a_transformado = (a / 100) + (((a % 100) / 10) * 10) + (((a % 100) % 10) * 100);
        b_transformado = (b / 100) + (((b % 100) / 10) * 10) + (((b % 100) % 10) * 100);

        maior = (a_transformado + b_transformado + abs(a_transformado - b_transformado)) / 2;
        printf("%d\n", maior);
    }

    return 0;
}