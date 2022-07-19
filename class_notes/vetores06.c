/*
Problema 1: Leia uma sequência de 10
inteiros e imprima os pares e ímpares
de forma separada.
*/

#include <stdio.h>

int main() {

    int i;
    int V[10];

    for (i = 0; i < 10; i++) scanf("%d", V+i);

    for (i = 0; i < 10; i++) {
        if (*(V+i) % 2 == 0 ) printf("%d ", *(V+i));
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        if (*(V+i) % 2 != 0) printf("%d ", *(V+i));
    }


    return 0;
}