#include <stdio.h>
#include <string.h>

int main() {

    int i, j, k;
    int vezes, qtd, ver;
    int num, den;
    double valores[3][50];

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++) {

        scanf("%d", &qtd);

        memset(valores, 0, sizeof(int)*150);
        
        for (j = 0; j < qtd; j++) {

            scanf("%d%*c%d", &num, &den);
            // valores[0][j] = num;
            *(*(valores)+j) = num;
            // valores[1][j] = den;
            *(*(valores+1)+j) = den;
            // valores[2][j] = (double) num/den;
            *(*(valores+2)+j) = (double) num/den;
        }

        printf("Caso de teste %d\n", i);
        ver = 0;
        for (j = 0; j < (qtd-1); j++) {

            for (k = j+1; k < qtd; k++) {

                if ((*(*(valores+2)+j)) == (*(*(valores+2)+k))) {
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", *(*(valores)+j), *(*(valores+1)+j), *(*(valores)+k), *(*(valores+1)+k));
                    ver++;
                }
            }

        }

        if (ver == 0) printf("Nao ha fracoes equivalentes na sequencia\n");


    }



    return 0;
}