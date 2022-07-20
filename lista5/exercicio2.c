#include <stdio.h>

int main() {

    int i, cont = 0;
    int tam_vetor = 0, num_comp, numeros[1000] = {0};

    while (tam_vetor < 1 || tam_vetor > 1000) scanf("%d", &tam_vetor);

    for (i = 0; i < tam_vetor; i++) scanf("%d", numeros+i);

    scanf("%d", &num_comp);

    for (i = 0; i < tam_vetor; i++) {
        if (*(numeros+i) >= num_comp) cont++;
    }

    printf("%d\n", cont);

    return 0;
}