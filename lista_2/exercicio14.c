#include <stdio.h>

int main() {

    int num, i, div, soma, verificador;
    scanf("%d", &num);

    printf("%d = ", num);

    div = 1;
    soma = 0;
    for (i = num - 1; i > 0; i--) {
        if (num % div == 0) {
            soma += div;
            if (i != num - 1) printf("+ ");
            printf("%d ", div);

        }

        div++;
    }

    printf("= %d ", soma);
    if (soma == num) printf("(NUMERO PERFEITO)");
    else printf("(NUMERO NAO E PERFEITO)");



    return 0;
}