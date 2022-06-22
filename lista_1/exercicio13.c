#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    double x1, x2, delta;

    scanf("%d %d %d", &a, &b, &c);

    delta = (b * b) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0) {
        printf("POSICOES IMAGINARIAS");
    } else if ((x1 < -5 || x1 > -5) || (x2 < -5 || x2 > 5)) {
        printf("POSICOES: X1=%.2f e X2=%.2f (FORA DO EXPERIMENTO)\n", x1, x2);
        if (((a + b + c) % 3) == 0) {
            printf("FATO1: DESAPARECIDA\n");
        }
        if (((c % 2) == 0) && (c < (a + b))) {
            printf("FATO2: ORIGEM\n");
        }   
    } else {
        printf("POSICOES: X1=%.2f e X2=%.2f\n", x1, x2);
        if (((a + b + c) % 3) == 0) {
        printf("FATO1: DESAPARECIDA\n");
        }
        if (((c % 2) == 0) && (c < (a + b))) {
        printf("FATO2: ORIGEM\n");
        }
    }
    return 0;
}