#include <stdio.h>

#define N 1000

int main() {

    int l, c, i, j;
    int M[N][N];
    int maior = -1, menor = 1001, cont_mai = 0, cont_men = 0;
    double freq_mai, freq_men;

    scanf("%d%d", &l, &c);

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", *(M+i)+j);
            if (*(*(M+i)+j) > maior) maior = *(*(M+i)+j);
            if (*(*(M+i)+j) < menor) menor = *(*(M+i)+j);
        }
    }

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (maior == *(*(M+i)+j)) cont_mai++;
            if (menor == *(*(M+i)+j)) cont_men++;
        }
    }

    freq_mai = ((double) cont_mai/(l*c)) * 100;
    freq_men = ((double) cont_men/(l*c)) * 100; 

    printf("%d %.2lf%%\n%d %.2lf%%\n", menor, freq_men, maior, freq_mai);
 


    return 0;
}