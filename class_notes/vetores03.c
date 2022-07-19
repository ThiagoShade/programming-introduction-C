#include <stdio.h>

int main() {

    int i;
    int V[5] = {0}; // V propriamente dito é um ponteiro, então podemos acessar seus valores por meio deles e por meio de aritmética de ponteiros.


    for (i = 0; i < 5; i++) scanf("%d", &V[i]); // Lendo o vetor.

    printf("%d\n", *V); // A aritmética de ponteiros considera o + 1 como um elemento a mais, no caso de int ele soma +4 no endereço;
    printf("%d\n", *(V+1));
    printf("%d\n", *(V+2));
    printf("%d\n", *(V+3));
    printf("%d\n", *(V+4));

    



    return 0;
}
