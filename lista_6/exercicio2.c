#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Checa se duas strings são iguais
 * 
 * @param s1 string 1 a ser checada
 * @param s2 string 2 a ser checada
 * 
 * @return 0 se são diferentes, 1 se são iguais
 */
int check_equal_strings(char * s1, char * s2);

struct produto {
    char nome[51];
    double preco;
};

int main() {

    int i, j, k;
    int vezes, qtd_pr, qtd_com;
    double preco_tot;
    struct produto * produtos;
    char prod[51];
    int qtd_pr_com;

    scanf("%d", &vezes);

    for (i = 0; i < vezes; i++) {
        scanf("%d", &qtd_pr);
        produtos = (struct produto*) malloc(sizeof(struct produto));

        for (j = 0; j < qtd_pr; j++) scanf("%s%lf", produtos[j].nome, &produtos[j].preco);
        
        scanf("%d", &qtd_com);

        preco_tot = 0;
        for (j = 0; j < qtd_com; j++) {
            scanf("%s%d", prod, &qtd_pr_com);
            for (k = 0; k < qtd_pr; k++) {
                if (check_equal_strings(prod, produtos[k].nome) == 1) {
                    preco_tot += qtd_pr_com * produtos[k].preco;
                    break;
                }
            }
        }

        printf("R$ %.2lf\n", preco_tot);

        free(produtos);
    }


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