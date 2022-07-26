#include <stdio.h>

int main() {

    int i, indice_maior = 0, indice_ultimo = 0, cont_iguais = 0;
    int num_notas = 0;
    int notas[10000] = {0}, anterior = 0;

    scanf("%d", &num_notas);

    for (i = 0; i < num_notas; i++) {

        scanf("%d", notas+i);

        if (*(notas+i) > anterior) {

            indice_maior = i;
            anterior = *(notas+i);

        }


    }

    i--;
    indice_ultimo = i;

    for (i; i >= 0; i--) {
        if (*(notas+indice_ultimo) == *(notas+i)) cont_iguais++;
    }

    printf("Nota %d, %d vezes\n", *(notas+indice_ultimo), cont_iguais);
    printf("Nota %d, indice %d\n", *(notas+indice_maior), indice_maior);

    return 0;
}