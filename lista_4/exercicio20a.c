#include <stdio.h>
#include <string.h>
/**
 * @brief reordena uma string que teve um elemento retirado a partir da posição dada.
 * 
 * @param str string a ser reordenada
 * @param pos índice da posição inicial que começará a ordenação
 */
void reord_string(char str[], int pos);

int main() {

    int i, j;
    int dig_dado, dig_fin, tirados;
    char numero[100001];

    while (1) {

        scanf("%d%d%*c", &dig_dado, &dig_fin);

        if (dig_dado == 0 && dig_fin == 0) break;

        memset(numero, 0, 100001);

        scanf("%[^\n]%*c", numero);

        tirados = 0;
        while (tirados < (dig_dado-dig_fin)) {

            for (j = 0; j < (dig_dado-tirados); j++) {
                if (j == 0) {
                    if (*(numero+j) < *(numero+j+1)) {
                        *(numero+j) = '0';
                        tirados++;
                        reord_string(numero, j);
                        break;
                    }
                }
                else if (j == (dig_dado-tirados-1)) {
                    if (*(numero+j) < *(numero+j-1)) {
                        *(numero+j) = '0';
                        tirados++;
                        reord_string(numero, j);
                        break;
                    }
                }
                else {
                    if ((*(numero+j) < *(numero+j-1)) && (*(numero+j) < *(numero+j+1))) {
                        *(numero+j) = '0';
                        tirados++;
                        reord_string(numero, j);
                        break;
                    }
                }
            }

        }

        printf("%s\n", numero);

    }



    return 0;
}

void reord_string(char str[], int pos) {

    int i;

    for (i = pos; i < (strlen(str) - pos); i++) *(str+i) = *(str+i+1);
    

}
