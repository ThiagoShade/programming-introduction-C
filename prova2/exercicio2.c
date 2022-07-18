#include <stdio.h>
/**
 * Funcao que calcula os interceptos de uma reta nos eixos X e Y
 * de um Plano Cartesiano e verifica a qual eixo ela e paralela.
 * A reta é definida pela equação parametrica: ax+by+c = 0
 * de forma que a, b, e c sao os coeficientes da equacao
 *
 * @param a Coeficiente linear em x
 * @param b Coeficiente linear em y
 * @param c Coeficiente constante
 * @param x variavel x
 * @param y variavel y
 * @return 0 quando a reta nao e parelela a nenhum eixo, 1 quando a reta e
 * paralela ao eixo X, 2 quando a reta e paralela ao eixo Y e 0 caso contrario
 */
int intercepto( double a, double b, double c, double *x, double *y);

int main() {

    int vezes, retorno;
    double a, b, c, x = 0, y = 0;

    scanf("%d", &vezes);

    for(vezes; vezes > 0; vezes--) {

        scanf("%lf%lf%lf",&a, &b, &c);

        if (a == 0 && b == 0) {
            printf("RETA INVALIDA\n");
            continue;
        }


        retorno = intercepto(a, b, c, &x, &y);

        if (retorno == 0) {
            printf("NAO PARALELA\n");
            printf("Intercepto em X: (%.2lf, 0.00)\n", x);
            printf("Intercepto em Y: (0.00, %.2lf)\n", y);
        } else if (retorno == 1) {
            printf("PARALELA AO EIXO X\n");
            printf("Intercepto em Y: (0.00, %.2lf)\n", y);
        } else {
            printf("PARALELA AO EIXO Y\n");
            printf("Intercepto em X: (%.2lf, 0.00)\n", x);
        }


    }



    return 0;
}

int intercepto(double a, double b, double c, double *x, double *y) {

    if (a == 0) {
        *y = (-c)/b;
        return 1;
    }
    if (b == 0) {
        *x = (-c)/a;
        return 2;
    }
    
    *x = (-c)/a;
    *y = (-c)/b;

    return 0;

}
