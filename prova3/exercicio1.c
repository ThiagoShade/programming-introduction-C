#include <stdio.h>
#include <string.h>

int main() {

    int i, j, k;
    char texto[5100], letra_at;
    char l1_palavras[101] = {'\0'};
    int cont_l1, cont_oco, alit;

    while(scanf("%[^\n]%*c", texto) != EOF) {

        memset(l1_palavras, 0, 101);
        i = 0;
        j = 0;
        cont_l1 = 0;
        while (*(texto+i) != '\0') {
            
            if (i == 0) {
                if (*(texto+i) == ' ') {
                    k = 0;
                    while (*(texto+k) != ' ') k++;
                    *(l1_palavras) = *(texto+k);
                    i = k + 1;
                } else {
                    *(l1_palavras) = *(texto);
                    i++;
                }
                
                cont_l1++;
                continue;
            } 

            if (*(texto+i-1) == ' ') {
                *(l1_palavras+cont_l1) = *(texto+i);
                cont_l1++;
            }

            i++;
        }
        i = 0;
        while (*(l1_palavras+i) != '\0') {
            if ((*(l1_palavras+i) >= 'A') && (*(l1_palavras+i) <= 'Z')) *(l1_palavras+i) += 32;
            i++;
        }

        // for (i = 0; i < strlen(l1_palavras); i++) printf("%c\n", *(l1_palavras+i));

        i = 0;
        alit = 0;
        cont_oco = 0;
        while (*(l1_palavras+i) != '\0') {
            if (i == 0) {
                letra_at = *(l1_palavras+i);
                i++;
                continue;
            }
            if ((*(l1_palavras+i) == letra_at)) {
                if (cont_oco == 0) {
                    alit++;
                    cont_oco++;
                } else {
                    i++;
                    continue;
                }
            } else {
                letra_at = *(l1_palavras+i);
                cont_oco = 0;
            }

            i++;
        }

        printf("%d\n", alit);

    }


    return 0;
}
