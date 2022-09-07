    #include <stdio.h>
    #include <stdlib.h>
     
    typedef struct {
        int numJogo;
        int numero[6];
    } cart;
     
    int main() {
     
        int i, j, k;
        int n;
        int num_sort[6], num_conc;
        cart * jogos;
        int acert, prem = 0;
     
        scanf("%d", &n);
     
        jogos = calloc(n, sizeof(cart));
     
        for (i = 0; i < n; i++) {
            scanf("%d", &jogos[i].numJogo);
     
            for (j = 0; j < 6; j++) scanf("%d", &jogos[i].numero[j]);
        
        }
     
        scanf("%d", &num_conc);
     
        for (i = 0; i < 6; i++) scanf("%d", &num_sort[i]);
     
        for (i = 0; i < n; i++) {
            acert = 0;
            for (j = 0; j < 6; j++) {
                for (k = 0; k < 6; k++) {
                    if (jogos[i].numero[j] == num_sort[k]) acert++;
                }
            }
     
            if (acert == 6) {
                printf("SENA %d:", jogos[i].numJogo);
                for (j = 0; j < 6; j++) {
                    printf(" %d", jogos[i].numero[j]);
                }
                printf("\n");
                prem++;
            }
            if (acert == 5) {
                printf("QUINA %d:", jogos[i].numJogo);
                for (j = 0; j < 6; j++) {
                    for (k = 0; k < 6; k++) {
                        if (jogos[i].numero[j] == num_sort[k]) {
                            printf(" %d", jogos[i].numero[j]);
                            break;
                        }
                    }
                }
                printf("\n");
                prem++;
            }
            if (acert == 4) {
                printf("QUADRA %d:", jogos[i].numJogo);
                for (j = 0; j < 6; j++) {
                    for (k = 0; k < 6; k++) {
                        if (jogos[i].numero[j] == num_sort[k]) {
                            printf(" %d", jogos[i].numero[j]);
                            break;
                        }
                    }
                }
                printf("\n");
                prem++;
            }
        }
     
        if (prem == 0) printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", num_conc);
     
        free(jogos);
     
        return 0;
    }
