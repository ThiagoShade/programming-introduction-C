#include <stdio.h>
#include <math.h>

int main() {

    double x, N, ex, i, fatorial, contador;
    scanf("%lf%lf", &x, &N);

    ex = 0;
    fatorial = 1;
    contador = 2;
    for (i = N + 1; i > 0; i--) {

        if ((i == N + 1) || (i == N)) {
            ex += pow(x, N + 1 - i) / fatorial;
        }
        else {
            fatorial *= contador;
            contador++;
            ex += pow(x, N + 1 - i) / fatorial;
        }
    }

    printf("e^%.2lf = %.6lf", x, ex);


    return 0;
}