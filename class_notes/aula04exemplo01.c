#include <stdio.h>

int main() {

    int vezes, leitura, i;
    int marc[100];

    scanf("%d", &vezes);

    for (i = vezes; i > 0; i--) {
        scanf("%d", &leitura);
        marc[vezes - i] = leitura;
        printf("%d ", marc[vezes-i]);
    }


    return 0;
}