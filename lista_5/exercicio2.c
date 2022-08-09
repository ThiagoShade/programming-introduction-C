#include <stdio.h>
#define N 1000

int main() {

    int i, j;
    int tam;
    int M[N][N];

    scanf("%d", &tam);

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) scanf("%d", &M[i][j]);
    }

    j = tam - 1;
    for (i = 0; i < tam; i++) {

        printf("%d\n", M[i][j]);

        j--;
    }


    return 0;
}
