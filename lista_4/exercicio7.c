#include <stdio.h>

int main() {

    int i, i2;
    int tamanho = 0, maior, qtd;
    int vetor[10000];

    while (1) {
        scanf("%d", &tamanho);

        if (tamanho == 0) break;

        maior = 0;
        for (i = 0; i < tamanho; i++) {
            scanf("%d", vetor+i);
            if (maior < *(vetor+i)) maior = *(vetor+i);
        }

        for (i = 0; i < maior+1; i++) {
            qtd = 0;

            for (i2 = 0; i2 < tamanho; i2++) {
                if (*(vetor+i2) <= i) qtd++;
            }

            printf("(%d) %d\n", i, qtd);
        }
    }

    return 0;
}