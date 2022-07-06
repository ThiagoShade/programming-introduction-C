#include <stdio.h>

/**
 * @brief Valor absoluto de um numero qualquer
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */
double absoluto( double n );

/**
 * @brief Função que calcula a raiz quadrada de n.
 * @param n um numero real qualquer
 * @param p precisão do cálculos
 * @return a raiz quadrada de n
 */
double raiz( double n, double p, double *erro );

int main() {

    double num, erro, erro_final, r;

    scanf("%lf%lf", &num, &erro);

    r = raiz(num, erro, &erro_final);

    printf("r: %.9lf, err: %.9lf\n", r, erro_final);

    return 0;
}

double absoluto(double n) {

    if (n < 0) n = -n;

    return n;
}

double raiz(double n, double p, double *erro) {

    double r, erro_atual;

    r = 1;
    erro_atual = n - (r * r);;
    while (erro_atual > p) {

        r = (r + (n / r)) / 2;
        erro_atual = absoluto (n - (r * r));
        if (erro_atual > p) printf("r: %.9lf, err: %.9lf\n", r, erro_atual);

    }

    *erro = erro_atual;

    return r;
}