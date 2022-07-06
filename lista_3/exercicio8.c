#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Função que calcula a potencia de p mais próximo a n.
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna o valor da potencia mais proxima.
 */
int next_power( int n, int p );

int main() {

    int n, p;

    scanf("%d%d", &n, &p);

    printf("%d", next_power(n, p));

    return 0;
}

int next_power(int n, int p) {

}