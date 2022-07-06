#include <stdio.h>

/**
 * @brief apresenta os divisores de um número exceto ele mesmo e a soma deles.
 * 
 * @param num número que terá seus divisores apresentados.
 * @param soma soma dos divisores do número. 
 * 
 */
void somaDivisores(int num, int *soma_div);

int main() {

    int num, soma_div;

    scanf("%d", &num);

    printf("%d = ", num);

    somaDivisores(num, &soma_div);

    if (soma_div == num) printf(" (NUMERO PERFEITO)\n");
    else printf(" (NUMERO NAO E PERFEITO)\n");

    return 0;
}

void somaDivisores(int num, int *soma_div) {

    int div, i;

    div = 1;
    *soma_div = 0;
    for (i = num; i > 1; i--) {

        if (num % div == 0) {
            if (div != 1) printf("+ ");
            printf("%d ", div);
            *soma_div += div; 
        }
        div++;
    }

    printf("= %d", *soma_div);

}