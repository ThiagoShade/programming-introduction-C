#include <stdio.h>
#include <math.h>

int main() {

    double x, rad, N, i, numero_fatorial, fatorial, cosseno;
    int numero_voltas;
    scanf("%lf%lf", &x, &N);

    numero_voltas = x / (2 * M_PI);
    rad = x - ((M_PI * 2) * numero_voltas);

    cosseno = 0;
    numero_fatorial = 0;
    for (i = N + 1; i > 0; i--) {

        if (i == N + 1) fatorial = 1;
        else {
            fatorial *= numero_fatorial + 1; 
            fatorial *= numero_fatorial + 2;
            numero_fatorial += 2;
        }

        cosseno += (pow(-1, N - i + 1) * pow(x, 2 * (N - i + 1))) / fatorial;
    
        

    }
    printf("cos(%.2lf) = %.6lf", rad, cosseno);
    
    return 0;
}