#include <stdio.h>
#include <math.h>

int main() {

    double x, aproximado;
    int casas;

    printf("Número: ");
    scanf("%lf", &x);
    printf("Quantidade de casas decimais que deseja aproximar : ");
    scanf("%d", &casas);

    x = x + (4 * pow(10, -(1 + casas)));
    x = x * (pow(10, casas));
    x = (int) x;
    x = x * (pow(10, -casas));

    
    printf("O valor aproximado é: %lf", x);


    return 0;
}