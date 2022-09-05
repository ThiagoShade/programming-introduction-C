#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int num;
    int den;
    double quo;
} razao;

/**
 * @brief Função que identifica quantas razões possuem em uma string com várias razões na forma x/y.
 * 
 * @param s string a ser analisada
 * 
 * @return quantidade de razões
 */
int qtd_razoes(char * s);
/**
 * @brief Função que monta as razões do ponteiro para razão a partir da string com todas as razões.
 * 
 * @param s string que contém todas as razões
 * @param r ponteiro pra razão que será montado.
 */
void monta_razoes(char * s, razao * r);

int main() {

    int i, j, k;
    int cont_eq, qtd_r;
    int testes;
    char buffer[1001];
    razao * razoes = NULL;

    scanf("%d%*c", &testes);

    for (i = 0; i < testes; i++) {
        scanf("%[^\n]%*c", buffer);
    
        qtd_r = qtd_razoes(buffer);

        razoes = (razao *) calloc(qtd_r, sizeof(razao));
    
        monta_razoes(buffer, razoes);

        printf("Caso de teste %d\n", i+1);

        cont_eq = 0;
        for (j = 0; j < (qtd_r-1); j++) {
            for (k = j+1; k < qtd_r; k++) {
                if (razoes[j].quo == razoes[k].quo) {
                    printf("%d/%d equivalente a %d/%d\n", razoes[j].num, razoes[j].den, razoes[k].num, razoes[k].den);
                    cont_eq++;
                }
            }
        }

        if (cont_eq == 0) printf("Nao ha fracoes equivalentes na sequencia\n");
    
        free(razoes);
    }

    return 0;
}

int qtd_razoes(char * s) {

    int i = 0;
    int cont_barras = 0;

    while (s[i] != '\0') {

        if (s[i] == '/') cont_barras++;

        i++;
    }


    return cont_barras;

}

void monta_razoes(char * s, razao * r) {

    int i = 0, k = 0, j = 0, c = 0;
    int ver = 0; // num 0 *** den 1
    int num = 0, dig;

    while(1) {

        if (s[i] >= '0' && s[i] <= '9') {
            k = i;
            while(1) {
                if (s[k] == '/' || s[k] == ' ' || s[k] == '\0') break;
                k++;
            }
            
            num = 0;
            dig = k-i;
            for (j = 0; j < dig; j++) {
                num += (s[i]-48)*pow(10, dig-j-1);
                i++;
            }

            if (ver == 0) {
                r[c].num = num;
                ver++;
            } else {
                r[c].den = num;
                ver--;
                r[c].quo = (double) r[c].num/r[c].den;
                c++;
            }
        }

        if (s[i] == '\0') break;
        i++;
    }

    


}

