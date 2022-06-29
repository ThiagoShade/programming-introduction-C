#include <stdio.h>

int main() {

    int numero_times, qtd_finais, fatorial, i, contador1, contador2, contador3;
    scanf("%d", &numero_times);
    
    if (numero_times < 2) {
        printf("Campeonato invalido!");
    } else {
        contador1 = 1;
        contador2 = 1;
        contador3 = 0;
        while (contador1 < numero_times) {
            for (i = numero_times - contador1; i > 0; i--) {
                printf("Final %d: Time%d X Time%d\n", contador2 + contador3, contador1, contador2 + contador1);
                contador2++;
            }
            contador3 += contador2 - 1;
            contador2 = 1;
            contador1++;
        }
    }


    return 0;
}