#include <stdio.h>

int main() {

    int a = 1;
    const int b = 2;
    const int *ptr; // Não é um ponteiro constante, então não é preciso inicializá-lo na sua declaração.

    ptr = &a; // ptr foi declarado como um ponteiro para constante, mas não irá gerar erro apontá-lo para uma variável que não é constante, porém não poderemos alterar seu valor pelo ponteiro.

    printf("Valor de a: %d\n", *ptr);

    // *ptr = 5; // Mesmo que a variável a não seja constante, não podemos mudar o valor dela a partir de um ponteiro para constante.
    a = 5; // Mas podemos mudar o valor da variável, e a partir disso, o ponteiro apontará para o novo valor.

    printf("Novo valor de a: %d\n", *ptr);

    ptr = &b; // O ponteiro não é constante, então posso alterar o endereço para o qual aponta.

    printf("Valor de b: %d\n", *ptr);

    // *ptr = 6; // Além de b ser uma constante, ptr é um ponteiro para constante então não é possível alterar seu conteúdo de endereço.
    // b = 6; // Diferentemente de a, b é uma constante, então não podemos mudar seu valor.

    printf("Novo valor de b: %d\n", *ptr);



    return 0;
}