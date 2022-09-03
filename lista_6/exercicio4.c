#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct vetor {
    double n[4];
    double norma;
} vetor;

/**
 * @brief Troca todos os valores de um vetor de uma posição com o de sua posição seguinte.
 * 
 */
void switch_vetor_prox(vetor * v);

int main() {

    int i, j;
    int qtd;
    vetor * v1;

    scanf("%d", &qtd);

    v1 = malloc(sizeof(vetor)*qtd);

    for(i = 0; i < qtd; i++){

        for(j = 0; j < 4; j++) scanf("%lf", &v1[i].n[j]);
        
        v1[i].norma = sqrt(pow(v1[i].n[0], 2) + pow(v1[i].n[1], 2) + pow(v1[i].n[2], 2) + pow(v1[i].n[3], 2));

    }

    for (i = 0; i < (qtd -1); i++) {
        for (j = 0; j < (qtd-1); j++) {
            if (v1[j].norma > v1[j+1].norma) switch_vetor_prox(v1+j);
        }
    }


    for (i = 0; i < qtd; i++) {
        
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", v1[i].n[0], v1[i].n[1], v1[i].n[2], v1[i].n[3], v1[i].norma);          
        
    }
    
    free(v1);

    return 0;
}

void switch_vetor_prox(vetor * v) {

    int i;
    double aux;

    for (i = 0; i < 4; i++) {

        aux = v[0].n[i];
        v[0].n[i] = v[1].n[i];
        v[1].n[i] = aux;
    }

    aux = v[0].norma;
    v[0].norma = v[1].norma;
    v[1].norma = aux;

}
