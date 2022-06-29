#include <stdio.h>

int main() {

    int num, qtd_pares, soma_par, qtd_impares, soma_impar;
    double media_par, media_impar;

    qtd_pares = 0;
    qtd_impares = 0;
    soma_par = 0;
    soma_impar = 0;

    while (1) {

        scanf("%d", &num);
        if (num == 0) break;
        else if (num % 2 == 0) {
            qtd_pares++;
            soma_par += num;
        } else {
            qtd_impares++;
            soma_impar += num;
        }
    }

    media_impar = 0.0;
    media_par = 0.0;

    if (qtd_pares != 0) media_par = soma_par / (1.0 * qtd_pares);
    if (qtd_impares != 0) media_impar = soma_impar / (1.0 *qtd_impares);

    printf("MEDIA PAR: %lf\nMEDIA IMPAR: %lf", media_par, media_impar);

    return 0;
}