#include <stdio.h>

#define N 1000

int main() {

    int i, j, k;
    int tam;
    int M[N][N];
    int aux;

    scanf("%d", &tam);

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) scanf("%d", *(M+i)+j);
    }

    for (j = 0; j < tam; j++) {
        for (i = 0; i < (tam-1); i++) {
            for (k = 0; k < (tam-1); k++) {
                if (*(*(M+k)+j) > *(*(M+k+1)+j)) {
                aux = *(*(M+k)+j);
                *(*(M+k)+j) = *(*(M+k+1)+j);
                *(*(M+k+1)+j) = aux;
                }
            }
            
        }
    }

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (j != 0) printf(" ");
            printf("%d", *(*(M+i)+j));
        }
        printf("\n");
    }


    return 0;
}