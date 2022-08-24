#include <stdio.h>

struct fracao {
    int num;
    int den;
    double quo;
};

int main() {

    int i, j, k;
    int vezes, qtd, equi;
    struct fracao v[50];

    scanf("%d", &vezes);

    for (i = 1; i <= vezes; i++) {
        scanf("%d", &qtd);
        for (j = 0; j < qtd; j++) {
            scanf("%d/%d", &v[j].num, &v[j].den);
            v[j].quo = (double) v[j].num/v[j].den;
        }
        printf("Caso de teste %d\n", i);
        equi = 0;
        for (j = 0; j < (qtd-1); j++) {
            for (k = j+1; k < qtd; k++) {
                if (v[j].quo == v[k].quo) {
                    printf("%d/%d equivalente a %d/%d\n", v[j].num, v[j].den, v[k].num, v[k].den);
                    equi++;
                }
            }
        }

        if (equi == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    }

    return 0;
}
