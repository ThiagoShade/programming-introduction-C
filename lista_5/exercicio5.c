#include <stdio.h>
#include <string.h>
/**
 * @brief compara duas strings.
 * 
 * @param s1 string a ser comparada
 * @param s2 string a ser comparada
 * 
 * @return 0 quando são diferentes, 1 quando são iguais.
 */
int comp_string(char s1[], char s2[]);
/**
 * @brief transforma todos os caracteres de uma string em minúsculo.
 * 
 * @param s1 string a ter seus caracteres colocados em minúsculo.
 * 
 * @return void
 */
void lower_string(char s1[]);

int main() {

    int i;
    char leitura[15] = {0};
    char paises[24][15] = {"brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos", "inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile", "mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria", "marrocos", "japao"};
    char frases[24][25] = {"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!", "Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!", "Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"};

    while (scanf("%s", leitura) != EOF) {

        lower_string(leitura);
        
        for (i = 0; i < 24; i++) {
            if (comp_string(*(paises+i), leitura) == 1) {
                printf("%s\n", *(frases+i));
                break;
            }
        }

        if (i == 24) printf("-- NOT FOUND --\n");


    }


    return 0;
}

int comp_string(char s1[], char s2[]) {

    int i;
    int tam;

    if (strlen(s1) != strlen(s2)) return 0;

    tam = strlen(s1);
    
    for (i = 0; i < tam; i++) {
        if (*(s1+i) != *(s2+i)) return 0;
    }

    return 1;
}

void lower_string(char s1[]) {

    int i = 0;

    while (*(s1+i) != '\0') {

        if ((*(s1+i) >= 'A') && (*(s1+i) <= 'Z')) *(s1+i) += 32;

        i++;
    }
}