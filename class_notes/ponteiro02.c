/**
* @brief: Função que calcula as raízes de uma equação de grau 2.
*
* @param a: coeficiente quadrado
* @param b: coeficiente linear
* @param c: coeficiente independente
* @param x1: ponteiro para primeira raíz
* @param x2: ponteiro para segunda raíz
*
* @return: 0 para raíz única
           1 para raízes distintas 
           2 para raízes imaginárias 
           -1 para coeficientes inválidos (não forma uma equação)
*/


#include <stdio.h>
#include <math.h>
int raizesEq2Grau (double a, double b, double c, double *x1, double *x2);

int raizesEq2Grau (double a, double b, double c, double *x1, double *x2) {

    double delta = (b * b) + (-4 * a * c);

    if (a == 0) {
        if (b != 0) {
            *x1 = -c/b;
            return 0;
        } else return -1;
    }


    if (delta == 0) {
        *x1 = -b / (2 * a);
        return 1;
    } else if (delta > 0) {
        *x1 = (-b - sqrt(delta)) / (2 * a);
        *x2 = (-b + sqrt(delta)) / (2 * a);
        return 2;
    } else return 0;


}





int main() {

    int verificador;
    double a, b, c, x1, x2;

    scanf("%lf%lf%lf", &a, &b, &c);

    verificador = raizesEq2Grau(a, b, c, &x1, &x2);

    if (verificador == 1) printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    else if (verificador == 2) printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    else if (verificador == -1) printf("NAO FORMA UMA EQUACAO");
    else printf("RAIZES IMAGINARIAS\n");



    return 0;
}