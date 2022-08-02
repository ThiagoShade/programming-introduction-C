#include <stdio.h>
/**
 * @brief Calcula o valor absoluto de uma expressão.
 * 
 * @param num número ou expressão que terá seu módulo calculado.
 *
 * @return módulo do número ou expressão.
 */
double absoluto(double num);

int main() {

    int vezes, i, i2;
    double ponto1[3], ponto2[3], vetor[3];
    double maior;

    scanf("%d", &vezes);

    for (i = 0; i < vezes-1; i++) {
        
        if (i == 0) for (i2 = 0; i2 < 3; i2++) scanf("%lf", ponto1+i2);
        for (i2 = 0; i2 < 3; i2++) scanf("%lf", ponto2+i2);

        for (i2 = 0; i2 < 3; i2++) *(vetor+i2) = absoluto(*(ponto2+i2) - *(ponto1+i2));
        maior = *(vetor);
        if (*(vetor+1) > maior) maior = *(vetor+1);
        if (*(vetor+2) > maior) maior = *(vetor+2);
    
        printf("%.2lf\n", maior);
        
        for(i2 = 0; i2 < 3; i2++) *(ponto1+i2) = *(ponto2+i2);
    }

    return 0;
}

double absoluto(double num) {

    if (num < 0) num = -num;

    return num;

}