#include <stdio.h>

#define N 1000

int main() {

    int i, j;
    int l, c;
    int M[N][N];
    int maior, menor, l_maior, c_maior, l_menor, c_menor;
    int aux;

    scanf("%d%d", &l, &c);

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", *(M+i)+j);
            if (i == 0 && j == 0) {
                maior = *(*(M+i)+j);
                menor = *(*(M+i)+j);
            }
            if (*(*(M+i)+j) > maior) {
                maior = *(*(M+i)+j);
                l_maior = i;
                c_maior = j;
            }
            if (*(*(M+i)+j) < menor) {
                menor = *(*(M+i)+j);
                l_menor = i;
                c_menor = j;
            }
        }
    }

    *(*(M+l_maior)+c_maior) = menor;
    *(*(M+l_menor)+c_menor) = maior;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (j != 0) printf(" ");
            printf("%d", *(*(M+i)+j));
        }
        printf("\n");
    }



    return 0;
}