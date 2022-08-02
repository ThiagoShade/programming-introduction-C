#include <stdio.h>
#include <math.h>

int main() {

    int i, i2, i3, marc;
    int dig_dado, dig_fin;
    char texto[100000] = {'\0'};
    int numero = 0, peso, dig;

    while (1) {

        scanf("%d%d%*c", &dig_dado, &dig_fin);

        if (dig_dado == 0 && dig_fin == 0) break;

        scanf("%[^\n]%*c", texto);

        numero = 0;
        peso = dig_fin - 1;
        marc = 0;
        for (i = 0; i < dig_fin; i++) {

            for (i2 = marc; i2 < dig_dado; i2++) {
                if (i2 == i) {
                    for (i3 = 0; i3 < i; i3++) {
                        dig = *(texto+i) - 48;
                        break;
                    }
                }
                if (*(texto+i2+1) <= *(texto+i2)) {
                    dig = *(texto+i2) - 48;
                    printf("dígito atual: %d\n", dig);
                    marc = i2+1;
                    break;
                }
            }

            numero += dig * pow(10, peso);
            peso--;
            printf("numero atual: %d\n", numero);
        }

        printf("%d", numero);

    }


    return 0;
}