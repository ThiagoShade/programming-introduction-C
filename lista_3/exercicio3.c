#include <stdio.h>

/**
 * @param num número que terá seus dígitos separados.
 * @param dg1 ponteiro que altera valor do dígito1.
 * @param dg2 ponteiro que altera valor do dígito2.
 * @param dg3 ponteiro que altera valor do dígito3.
 * @return não possui retorno, os valores são alterados por ponteiro.
 */

void separaDigitos(int num, int *dg1, int *dg2, int *dg3);

int main() {

    int num, digito1, digito2, digito3;

    scanf("%d", &num);

    separaDigitos(num, &digito1, &digito2, &digito3);

    printf("%d%d%d", digito3, digito2, digito1);


    return 0;
}

void separaDigitos(int num, int *dg1, int *dg2, int *dg3) {

    *dg1 = num / 100;
    *dg2 = (num % 100) / 10;
    *dg3 = (num % 100) % 10;

}