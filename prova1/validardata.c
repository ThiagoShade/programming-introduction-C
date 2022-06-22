#include <stdio.h>

int main() {

    int dia, mes, ano, verificador, verificador2;

    scanf("%d%d%d", &dia, &mes, &ano);
    verificador = 1;

    if (ano < 1900 || ano > 2036) {
        printf("DATA FORA DO INTERVALO ESTIPULADO");
        return 0;
    } else {
        
        if (mes < 0 || mes > 12) {
            printf("DATA INVALIDA");
            return 0;
        } else {
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
                verificador2 = 1;
            } else if (mes == 11 || mes == 9 || mes == 4 || mes == 6) {
                verificador2 = 2;
            } else verificador2 = 3;
            switch (verificador2) {
                case 1 :
                    if (dia > 31) {
                    printf("DATA INVALIDA");
                    verificador = 0;
                    }
                    break;
                case 3 :
                    if (dia > 29) {
                    printf("DATA INVALIDA");
                    verificador = 0;
                    } else if (dia == 29) {
                        if (!(((ano % 400) == 0) || (((ano % 4) == 0) && (ano % 100 == 0)))) {
                            printf("DATA INVALIDA");
                            verificador = 0;
                        } 
                    }
                    break;
                case 2:
                    if (dia > 30) {
                    printf("DATA INVALIDA");
                    verificador = 0;
                    }
                    break;
            }
            if (verificador == 1) printf("%d/%d/%d", dia, mes, ano);
        }


    }


    return 0;
}