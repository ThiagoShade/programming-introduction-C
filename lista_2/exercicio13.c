#include <stdio.h>

int main() {

    int n, i, numero, soma, contador, ultimo, numero_soma;
    scanf("%d", &n);

    numero = 1;
    ultimo = 1;
    for(i = n; i > 0; i--) {
        printf("%d*%d*%d = ", numero, numero, numero);
        for(contador = numero; contador > 0; contador--) {

            if (numero == 1) {
                printf("1\n");
                break;
            }
            numero_soma = ultimo + (2 * (numero - contador + 1));
            if (contador != 1) printf("%d+", numero_soma);
            else {
                printf("%d\n", numero_soma);
                ultimo = numero_soma;
            }
        }

        numero++;
    }

    return 0;
}