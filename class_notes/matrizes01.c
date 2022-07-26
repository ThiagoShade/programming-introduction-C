#include <stdio.h>

int main() {

    int A[2][3]; // Declaração de uma matriz 2x3.
    int i, j; // Índices para ler a matriz.

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) scanf("%d", &A[i][j]); // Lendo uma matriz usando dois índices.
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) printf("%d ", A[i][j]); // Printando a matriz usando dois índices.
    }

    printf("\n");



    for (i = 0; i < (2*3); i++) { 
        /*  Para percorrer a matriz com apenas um índice temos que usar essa notação,
            pois uma matriz é considerada um vetor de vetores, portanto precisamos especificar
            que a matriz em si é um ponteiro que aponta para outro ponteiro(vetor). Resumindo,
            A é um vetor com dois elementos sendo cada um vetores de 3 inteiros. Resumindo resumindo
            ponteiro pra ponteiro.
        */
        scanf("%d", (*A+i));
    }

    for (i = 0; i < (2*3); i++) { // Mesma coisa aqui, mas extraindo o conteúdo.
        printf("%d ", *(*A+i));
    }
    
    printf("\n");



    return 0;
}