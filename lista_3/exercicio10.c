#include <stdio.h>

/**
 * @brief Função que calcula o valor de pi usando a série proposta por John Wallis.
 * 
 * @param n quantidade de termos da série.
 * 
 * @return Valor aproximado da constante pi de acordo com a quantidade de termos da série.
 */
double compute_pi(int n);


int main() {

    int qtd_termos;

    scanf("%d", &qtd_termos);

    printf("%.12lf", compute_pi(qtd_termos));


    return 0;
}

double compute_pi(int n) {

    int numer, denom, soma_numer, soma_denom, contador1, contador2;
    double pi;

    pi = 2/1.0;
    n--;

    contador1 = 0;
    contador2 = 1;
    for (n; n > 0; n--) {

        if (contador1 == 0) {
            numer = 2;
            denom = 3;
            contador1++;
        } else {
            if (contador2 == 1) contador1 = 0;
            numer = 4 + (2 * (contador1 / 2));
            denom = 3 + (2 * (contador2 / 2));
            contador1++;
            contador2++;

        }

        pi *= numer/(denom * 1.0);
       

    }

    pi *= 2;

    return pi;
}