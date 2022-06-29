#include <stdio.h>

int main() {

    int vezes, i;
    double temp_C, temp_F;
    scanf("%d", &vezes);

    for (i = vezes; i > 0; i--) {
        scanf("%lf", &temp_F);
        temp_C = (5 * (temp_F - 32)) / 9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", temp_F, temp_C);
    }
    
    return 0;
}