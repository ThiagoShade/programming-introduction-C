#include <stdio.h>

/**
 * Funcao que calcula o fatorial de um numero n
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat(unsigned int n);

unsigned long int fat (unsigned int n) {

    int fat = n;

    while (n > 1) {
        fat *= n - 1;
        n--;
    }

    if (fat == 0) return 1;
    else return fat;


}


int main() {

    int n;

    scanf("%d", &n);

    printf("%d! = %lu", n, fat(n));

    return 0;
}