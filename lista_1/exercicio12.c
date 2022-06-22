#include <stdio.h>

int main () {

    float renda, sal_min;
    int pessoas, escola, etnia, cota;
    
    sal_min = 937.00;
    scanf("%f %d %d %d", &renda, &pessoas, &escola, &etnia);
    renda = renda/pessoas;

    if (escola == 1) {
        printf("ALUNO NAO COTISTA");
    } else if (renda > (1.5 * sal_min)) {
        if (etnia == 4) {
            cota = 3;
        } else {
            cota = 4;
        }
        printf("ALUNO COTISTA (L%d)", cota);       
    } else {
        if (etnia == 4) {
            cota = 1;
        } else {
            cota = 2;
       }
        printf("ALUNO COTISTA (L%d)", cota);
    }
    return 0;
}