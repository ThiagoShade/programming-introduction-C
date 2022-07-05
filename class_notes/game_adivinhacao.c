#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define MIN 0
#define N_TENTATIVAS 3

int main() {


    int N, k, c;

    c = 0;

    srand(time(0)); // Gera valores "aleatórios" para que sirva de seed para a função rand.
    N = rand() % (MAX-MIN+1) + MIN; // Gera um número aleatório e matematicamente deixa ele na faixa do mínimo e máximo.

    while (1) {

        printf("Digite um numero de %d ate %d.\n", MIN, MAX);
        printf("Tentativa %d: ", c+1);
        scanf("%d", &k);

        if (k == N) {
            printf("Parabéns, você acertou.\n");
            return 0;
        }

        if (k < N) printf("O número sorteado é maior!\n"); // Verifica o número para dar a dica.
        else (printf("O número sorteado é menor!\n"));

        c++;
        if (c == N_TENTATIVAS) { // Verifica se todas as tentativas já foram gastas.
            printf("Número de tentativas esgotado, você perdeu!\n");
            printf("O número sorteado era: %d\n", N);
            return 0;
        }

    }



}