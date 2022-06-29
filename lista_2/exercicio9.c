#include <stdio.h>

int main() {

    double numero, erro_pred, erro_atual, i, r;
    scanf("%lf%lf", &numero, &erro_pred);
    r = 1;
    erro_atual = numero - 1;

    while (erro_atual > erro_pred) {
        r = (r + (numero / r)) / 2;
        erro_atual = (r * r) - numero;
        printf("r: %.9lf, err: %.9lf\n", r, erro_atual);
    } 

    return 0;
}