#include <stdio.h>

int main() {

    int i, i2;
    int num_num, numeros[1000000];
    int aux;
    double mediana = 0;

    scanf("%d", &num_num);

    for (i = 0; i < num_num; i++) scanf("%d", numeros+i);

    i = 0;

    while (i + 1 != num_num) {

        i2 = i + 1;
        while (i2 != num_num) {
            if (*(numeros+i) > *(numeros+i2)) {
                aux = *(numeros+i);
                *(numeros+i) = *(numeros+i2);
                *(numeros+i2) = aux;

                i2 = i + 1;
                continue;
            }
            i2++;
        }


        i++;
    }

    if (num_num % 2 == 0) {
        mediana = (*(numeros+((num_num-1)/2)) + (*(numeros+(num_num/2)))) / (double) 2;
    } else {
        mediana = *(numeros+(num_num/2));
    }

    printf("%.2lf\n", mediana);

    return 0;
}