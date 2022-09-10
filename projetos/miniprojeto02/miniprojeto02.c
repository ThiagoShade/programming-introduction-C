#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "poly.h"
/**
 * @brief Checa se duas strings são iguais
 * 
 * @param s1 string 1 a ser checada
 * @param s2 string 2 a ser checada
 * 
 * @return 0 se são diferentes, 1 se são iguais
 */
int check_equal_strings(char * s1, char * s2);

int main() {

    int i, j, k;
    int qtd_p, qtd_op;
    char id_p1[20], id_p2[20], op;
    Poly * p = NULL;
    Poly * pr = NULL;

    scanf("%d%*c", &qtd_p);
    p = poly_read(qtd_p);

    scanf("%d%*c", &qtd_op);

    for(i = 0; i < qtd_op; i++) {
        scanf("%[^+-]", id_p1);
        scanf("%c", &op);
        scanf("%[^\n]%*c", id_p2);

        for(j = 0; j < qtd_p; j++) {
            if (check_equal_strings(id_p1, p[j].id) == 1) {
                for (k = 0; k < qtd_p; k++) {
                    if (check_equal_strings(id_p2, p[k].id) == 1) {
                        if (op == '+') {
                            pr = soma_poli(&p[j], &p[k]);
                        }
                        if (op == '-') {
                            pr = sub_poli(&p[j], &p[k]);
                        }

                        goto END;
                    }
                }
            }
        }
        END:


        norm_poli(pr);

        print_poli(pr);

        if (pr->p != -1) free(pr->coef);
        free(pr);
    }
    


    for (i = 0; i < qtd_p; i++) {
        free(p[i].id);
        if (p[i].p != -1) free(p[i].coef); // Só limpa a memória se tiver sido alocado. Coeficientes de polinômios nulos com grau '-1' não precisam ser limpados pois não foram alocados.
    }
    free(p);

    return 0;
}

int check_equal_strings(char * s1, char * s2) {
 
    int i = 0, j = 0;
    int dif = 0;
 
    while(1) {
 
        if (*(s1+i) != *(s2+j)) dif++;
 
        if (*(s1+i) != '\0') i++;
        if (*(s2+j) != '\0') j++;
        if (*(s1+i) == '\0' && *(s2+j) == '\0') break;
    }
 
    if (dif == 0) return 1;
    else return 0;
 
}

