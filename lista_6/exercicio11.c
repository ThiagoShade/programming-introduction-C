#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int qtd_im;
    int * qtd_mo, * con;

    while (1) {
        scanf("%d", &qtd_im);

        if (qtd_im == 0) break;

        qtd_mo = (int *) calloc(qtd_im, sizeof(int));
        con = (int *) calloc(qtd_im, sizeof(int));

        for (i = 0; i < qtd_im; i++) {
            scanf("%d%d", &qtd_mo[i], &con[i]);
        }

        


        free(qtd_mo);
        free(con);

    }


    return 0;
}