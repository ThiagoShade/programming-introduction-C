#include <stdio.h>

int main() {

    int n, i;
    double soma;
    scanf("%d", &n);

    soma = 0;

    if (n <= 1) printf("Numero invalido!");
    else {
        for (i = n; i > 0; i--) {
            soma += 1.0 / ((n - i) + 1);
        }

        printf("%.6lf", soma);
    }

    return 0;
}