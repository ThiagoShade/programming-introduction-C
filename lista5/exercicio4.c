#include <stdio.h>

int main() {

    int i;
    int vezes, num_leds, verificador;
    char numero = '0';

    scanf("%d%*c", &vezes);

    for (i = 0; i < vezes; i++) {
        
        num_leds = 0;
        numero = '0';
        while (numero != '\n'){
        
            scanf("%c", &numero);

            if (numero == '1') verificador = 1;
            if (numero == '2' || numero == '3' || numero == '5') verificador = 2;
            if (numero == '4') verificador = 3;
            if (numero == '6' || numero == '9' || numero == '0') verificador = 4;
            if (numero == '7') verificador = 5;
            if (numero == '8') verificador = 6;
            if (numero == '\n') verificador = 0;

            switch (verificador) {
                case 1:
                    num_leds += 2;
                    break;
                case 2:
                    num_leds += 5;
                    break;
                case 3:
                    num_leds += 4;
                    break;
                case 4:
                    num_leds += 6;
                    break;
                case 5:
                    num_leds += 3;
                    break;
                case 6:
                    num_leds += 7;
                    break;
            }
        }

        printf("%d leds\n", num_leds);
    }
    

    return 0;
}