#include <stdio.h>
/**
 * @brief Ordena um vetor de inteiros
 * 
 * @param v vetor de inteiros
 * @param tam tamanho do vetor
 */
void ord_vet(int v[], int tam);

int main() {

    int i, i2, i3;
    int anoes[9], anoes_fin[7];
    int soma, soma_obj, vezes;

    scanf("%d", &vezes);

    for (i = 0; i < vezes; i++) {
        
        soma = 0;
        for (i2 = 0; i2 < 9; i2++) { 
            
            scanf("%d", anoes+i2);
            soma += *(anoes+i2);
        }

        soma_obj = soma - 100;

        for (i2 = 0; i2 < 9; i2++) {
            for (i3 = i2; i3 < 9; i3++) {
                if ((*(anoes+i2) + *(anoes+i3)) == soma_obj) {
                    *(anoes+i2) = -1;
                    *(anoes+i3) = -1;
                    goto END;
                }
            }
        } END:

        i3 = 0;
        for (i2 = 0; i2 < 9; i2++) {
            if (*(anoes+i2) == -1) continue;
            
            *(anoes_fin+i3) = *(anoes+i2);
            i3++;
        }
        
        ord_vet(anoes_fin, 7);

        for (i2 = 0; i2 < 7; i2++) printf("%d\n", *(anoes_fin+i2));

    }



    return 0;
}

void ord_vet(int v[], int tam) {

    int i = 0, i2;
    int aux;

    while (i + 1 != tam) {
        i2 = i + 1;
        while (i2 != tam) {
            if (*(v+i) > *(v+i2)) {
                aux = *(v+i);
                *(v+i) = *(v+i2);
                *(v+i2) = aux;

                i2 = i + 1;
                continue;
            }
            i2++;
        }
        i++;
    }
}