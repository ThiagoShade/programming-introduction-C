#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i, j, ver;
    int qtd_im;
    int qtd_mo[1000000] = {0}, con[1000000] = {0};
    int soma_con, soma_mo;
    int con_p[201] = {0};
    double con_m, con_m_t;

    j = 0;
    while (1) {
        scanf("%d", &qtd_im);

        if (qtd_im == 0) break;

        j++;

        for (i = 0; i < qtd_im; i++) {
            scanf("%d%d", &qtd_mo[i], &con[i]);
        }

        soma_mo = 0;
        soma_con = 0;
        for(i = 0; i < qtd_im; i++) {
            con_m = (double) con[i] / qtd_mo[i];
            con_p[(int) con_m] += qtd_mo[i];
            soma_mo += qtd_mo[i];
            soma_con += con[i];
        }

        con_m_t = (double) soma_con / soma_mo;

        con_m_t *= 100;
        con_m_t = (int) con_m_t;
        con_m_t /= 100;

        printf("Cidade# %d:\n", j);
        ver = 0;
        for (i = 0; i < 201; i++) {
            if (con_p[i] != 0) {
                if (ver == 1) printf(" ");
                printf("%d-%d", con_p[i], i);
                ver = 1;            
            }
        }
        printf("\n");
        printf("Consumo medio: %.2lf m3.\n", con_m_t);
        printf("\n");

        memset(qtd_mo, 0, qtd_im*sizeof(int));
        memset(con, 0, qtd_im*sizeof(int));
        memset(con_p, 0, 201*sizeof(int));

    }


    return 0;
}
