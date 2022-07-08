#include <stdio.h>

/**
 * @brief converte um valor inteiro em Reais no menor valor de notas e moedas necessárias.
 * 
 * @param valor valor que será transformado na quantidade de notas e moedas.
 * @param pn100 ponteiro que aponta para a variável que guarda a quantidade de notas de 100.
 * @param pn50 ponteiro que aponta para a variável que guarda a quantidade de notas de 50.
 * @param pn10 ponteiro que aponta para a variável que guarda a quantidade de notas de 10.
 * @param pm1 ponteiro que aponta para a variável que guarda a quantidade de moedas de 1.
 *
 */
void converteEmNotasMoedas(int valor, int *pn100, int *pn50, int *pn10, int *pm1);

int main() {

    int valor, n100, n50, n10, m1;

    scanf("%d", &valor);

    converteEmNotasMoedas(valor, &n100, &n50, &n10, &m1);

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", n100, n50, n10, m1);


    return 0;
}

void converteEmNotasMoedas(int valor, int *pn100, int *pn50, int *pn10, int *pm1) {

    *pn100 = valor / 100;
    *pn50 = (valor % 100) / 50;
    *pn10 = ((valor % 100) % 50) / 10;
    *pm1 = ((valor % 100) % 50) % 10;
}