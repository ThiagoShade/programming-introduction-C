#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double n[4];
} ponto;

int main() {

    int i, j;
    int qtd_pontos;
    ponto * v = NULL;
    double dist;

    scanf("%d", &qtd_pontos);

    v = calloc(qtd_pontos, sizeof(ponto));

    for (i = 0; i < qtd_pontos; i++) {
        for (j = 0; j < 4; j++) scanf("%lf", &v[i].n[j]);
    }

    for (i = 0; i < (qtd_pontos-1); i++) {
        dist = sqrt(pow(v[i].n[0]-v[i+1].n[0], 2) + pow(v[i].n[1]-v[i+1].n[1], 2) + pow(v[i].n[2]-v[i+1].n[2], 2) + pow(v[i].n[3]-v[i+1].n[3], 2));
        printf("%.2lf\n", dist);
    }

    free(v);

    return 0;
}