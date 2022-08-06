#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Ordena um vetor de inteiros
 * 
 * @param v vetor de inteiros
 * @param tam tamanho do vetor
 */
void ord_vet(int v[], int tam);

int main() {

    int i, i2;
    int q1, q2, cont_q1 = 0, cont_q2 = 0;
    int * v1, * v2, * vr;


    scanf("%d%d", &q1, &q2);

    v1 = malloc(q1*sizeof(int)+1);
    v2 = malloc(q2*sizeof(int)+1);
    vr = malloc((q1+q2)*sizeof(int));

    for (i = 0; i < q1; i++) scanf("%d", v1+i);
    for (i = 0; i < q2; i++) scanf("%d", v2+i);

    *(v1+q1) = -1;
    *(v2+q2) = -1;

    for (i = 0; i < q1; i++) *(vr+i) = *(v1+i);

    for (i2 = 0; i2 < q2; i2++) {
        *(vr + i) = *(v2+i2);
        i++;
    }


    ord_vet(vr, q1+q2);

    for (i = 0; i < (q1+q2); i++) printf("%d\n", *(vr+i));

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