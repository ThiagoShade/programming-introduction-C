    #include <stdio.h>
    #include <stdlib.h>
     
    typedef struct {
        int likes;
        int rts;
        int ment;
    } inter;
     
    int main() {
     
        int ver1, ver2;
        int i, j, k, l;
        int dim, p_n_nul;
        inter * (* (*p));
        int a, b;
        int sum_lik, sum_rt, sum_ment;
        int sum_lik_tot = 0, sum_rt_tot = 0, sum_ment_tot = 0;
        int blank_slots = 0;
        int qtd_usu_efe = 0;
     
        scanf("%d", &dim);
     
        p = (inter * * *) calloc(dim, sizeof(inter * *));
        for (i = 0; i < dim; i++) {
            p[i] = (inter * *) calloc(dim, sizeof(inter *));
        }
     
        scanf("%d", &p_n_nul);
        
     
        for (i = 0; i < p_n_nul; i++) {
            scanf("%d %d", &a, &b);
     
            p[a][b] = calloc(1, sizeof(inter));
     
            scanf("%d %d %d", &p[a][b]->likes, &p[a][b]->rts, &p[a][b]->ment);
        }
     
        for (i = 0; i < dim; i++) {
     
            sum_lik = 0;
            sum_rt = 0;
            sum_ment = 0;
            ver1 = 0;
            for (j = 0; j < dim; j++) {
                if (p[i][j] != NULL) {
                    sum_lik += p[i][j]->likes;
                    sum_rt += p[i][j]->rts;
                    sum_ment += p[i][j]->ment;
                    ver1 = 1;
                    free(p[i][j]);
                } else blank_slots++;
            }
     
            if(ver1 == 1) qtd_usu_efe++;
     
            sum_lik_tot += sum_lik;
            sum_rt_tot += sum_rt;
            sum_ment_tot += sum_ment;
     
            if((sum_lik != 0) || (sum_ment != 0) || (sum_rt != 0)) {
                printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, sum_lik, sum_rt, sum_ment);
            }
        }
     
        printf("Slots vazios: %d\n", blank_slots);
        printf("Media de likes por usuario: %.2lf\n", (double)sum_lik_tot/qtd_usu_efe);
        printf("Media de retweets por usuario: %.2lf\n", (double)sum_rt_tot/qtd_usu_efe);
        printf("Media de mencoes por usuario: %.2lf\n", (double)sum_ment_tot/qtd_usu_efe);
     
        
        
        for (i = 0; i < dim; i++) {
            free (p[i]);
        }
        free(p);
     
        return 0;
    }
