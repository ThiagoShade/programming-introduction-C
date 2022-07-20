#include <stdio.h>


int main() {

    int i, i2, i3;
    int vezes, cont_vogais, cont_cons, cont_nao_letras;
    char texto[10001];
    char vogais[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};

    scanf("%d%*c", &vezes);

    for (i = 0; i < vezes; i++) {

        scanf("%[^\n]%*c", texto);
        
        i2 = 0;
        cont_vogais = 0;
        cont_cons = 0;
        cont_nao_letras = 0;

        while (texto[i2] != '\0') {

            if ((texto[i2] >= 'A' && texto[i2] <= 'Z') || (texto[i2] >= 'a' && texto[i2] <= 'z')) {
                for (i3 = 0; i3 < 10; i3++) { 
                    if (texto[i2] == vogais[i3]) {
                        cont_vogais++;
                        break;
                    }
                }

                if (i3 == 10) cont_cons++;

            } else cont_nao_letras++;


            i2++;
        }

        printf("Letras = %d\n", i2 - cont_nao_letras);
        printf("Vogais = %d\n", cont_vogais);
        printf("Consoantes = %d\n", cont_cons);

    }



    return 0;
}