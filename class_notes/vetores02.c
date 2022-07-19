#include <stdio.h>
#define N 10


int main() {

    int i, media;
    int soma = 0, idades[N] = {0}; // Vetor de tamanho N.

    for (i = 0; i < N; i++) scanf("%d", &idades[i]); // Coloca cada valor da idade em cada posição.
    for (i = 0; i < N; i++) soma += idades[i]; // Calcula a soma de todas as idades.

    media = soma/(double) N; // Calcula a média.

    for (i = 0; i < N; i++) { // Verifica quais idades são maiores que a média e printa elas.
        if (idades[i] > media) printf("%d", idades[i]);
    }


    return 0;
}