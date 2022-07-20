#include <stdio.h>

int main() {

    int i;
    int tam_vetor = 0, numeros[4999] = {0};

    scanf("%d", &tam_vetor);

    for (i = 0; i < tam_vetor; i++) scanf("%d", numeros+i);

    for (i = tam_vetor - 1; i >= 0; i--) printf("%d ", *(numeros+i));

    return 0;
}