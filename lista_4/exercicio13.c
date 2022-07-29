#include <stdio.h>
#include <string.h>
/**
 * @brief Inverte uma string
 * 
 * @param s Endereço da string a ser invertida
 * 
 */
void invert_str(char * s);


int main() {

    int i, i2;
    int vezes;
    int comeco, final;
    char numero_fin[100000] = {'\0'}, numero_at[6] = {'\0'};

    scanf("%d", &vezes);

    for (i = 0; i < vezes; i++) {

        scanf("%d%d", &comeco, &final);
        memset(numero_fin, 0, strlen(numero_fin));

        for (i2 = 0; i2 < (final-comeco+1); i2++) {
            printf("%d", comeco+i2);
            memset(numero_at, 0, 6);
            sprintf(numero_at, "%d", comeco+i2);
            strcat(numero_fin, numero_at);
        }

        invert_str(numero_fin);
        
        printf("%s", numero_fin);
        printf("\n");


    }


    return 0;
}

void invert_str(char * s) {

    int i;
    int tamanho;
    char aux;

    tamanho = strlen(s);

    for (i = 0; i < tamanho/2; i++) {
        aux = *(s+i);
        *(s+i) = *(s+tamanho-1-i);
        *(s+tamanho-1-i) = aux;
    }

}