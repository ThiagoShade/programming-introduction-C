#include <stdio.h>

int main() {

    int i, i2;
    int vetor[5000];
    int tamanho, unicos = 0;

    scanf("%d", &tamanho);

    for (i = 0; i < tamanho; i++) scanf("%d", vetor+i);

    for (i = 0; i < tamanho; i++) {
        for(i2 = 0; i2 < tamanho; i2++) {
            
            if (i != i2) {
                if (*(vetor+i) == *(vetor+i2)) break;
            }

        }

        if (i2 == tamanho) unicos++;
    }

    printf("%d\n", unicos);

    return 0;
}