#include <stdio.h>
#include <math.h>

int main() { 

    double s1, s2, s3, d1, d2, d3;
    
    scanf("%lf%lf%lf", &s1, &s2, &s3);
    
    d2 = s2;
    d1 = s1 / 2;
    d3 = s3 / 2;


    if (d1 == d2 && d2 == d3) {
        printf("VOLTAR");
    } else if (d1 < d2 && d2 < d3) {
        printf("DIREITA");
    } else if (d1 > d2 && d2 > d3) {
        printf("ESQUERDA");
    } else {
        printf("PARAR");
    }

    
    
    return 0;
}