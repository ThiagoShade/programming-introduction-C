#include <stdio.h>

int main() {

    int a = 2;
    const int b = 3;
    // const int *const ptr = &a; // Isso pode ser feito pois mesmo sendo ponteiro para constante, não nos impede de apontar para não constante, porém não iríamos conseguir mudar o valor de a por meio do ponteiro.
    const int *const ptr = &b; // Lembrando da inicialização na declaração pois o ponteiro é constante.

    printf("Valor de ptr: %d", *ptr);

    // ptr = &a; // Não pode ser feito pois ptr é um ponteiro constante.
    // *ptr = 6; // Não pode ser feito pois ptr é um ponteiro para constante.

    return 0;
}