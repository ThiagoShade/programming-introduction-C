#include <stdio.h>

/**
* Retorna o n-ésimo termo da sequência de Fibonacci
* @param t1 primeiro termo da sequência
* @param t2 segundo termo da sequência
* @param n a posição do termo desejado da sequência
* @return o valor do n-ésimo termo da sequência
*/
int fibonacci( int t1, int t2, int n);



int main() {

    int termo1, termo2, n_esimo_termo;

    scanf("%d%d%d", &termo1, &termo2, &n_esimo_termo);

    printf("%d", fibonacci(termo1, termo2, n_esimo_termo));


    return 0;
}

int fibonacci( int t1, int t2, int n) {

    int i, soma;

    if (n == 1) return t1;
    if (n == 2) return t2;

    for (i = 2; i != n; i++) {
        soma = t1 + t2;
        t1 = t2;
        t2 = soma;
    }

    return soma;

}