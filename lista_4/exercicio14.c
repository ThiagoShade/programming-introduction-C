#include <stdio.h>
#include <string.h>
/**
 * @brief 
 * 
 * @param str vetor de caracteres onde a string lida será gravada
 * @param n quantidade máxima de caracteres a ser lidos.
 * 
 * @return quantidade de caracteres lidos.
 */
int le_string(char * str, int n);

/**
 * @brief 
 * 
 * @param str string de entrada 
 */
void print_codes(char * str);

#define N 128+1

int main() {

    char str[N], s[N];
    char c;
    int i;

    scanf("%c", &c);
    le_string(str, 3);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);
    
    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%c", &c);
    le_string(str, 5);
    print_codes(str);
    printf("caracter:%c, str:%s\n", c, str);

    scanf("%d", &i);
    le_string(str, 3);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    //printf("Digite inteiros separados por espaco: ");
    scanf("%d", &i);
    //printf("inteiro:%d\n", i);
    //printf("Le string (15):\n");
    le_string(str, 15);
    print_codes(str);
    printf("inteiro:%d, str:%s\n", i, str);

    //printf("Digite uma string sem espacos: ");
    scanf("%s", s);
    //printf("string:%s\n", str);
    //printf("Le string (10):\n");
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    //printf("Digite uma string com espacos: ");
    scanf("%s", s);
    //printf("string:%s\n", str);
    //printf("Le string (20):\n");
    le_string(str, 100);
    print_codes(str);
    printf("string:%s, str:%s\n", s, str);

    return 0;
}

int le_string(char * str, int n) {

    int i = 0, i2 = 0;
    char lixo = '\r', str_fin[N] = {'\0'};

    memset(str, 0, sizeof(char)*N);

    scanf("%*c");
    scanf("%[^\n]", str);

    while (*(str+i) != '\0') {

        if (*(str+i) != '\n' || *(str+i) != '\r') {
            *(str_fin+i2) = *(str+i);
            i2++;
        }
        i++;

    }

    memset(str, 0, sizeof(char)*N);

    for (i = 0; i < n; i++) {
        *(str+i) = *(str_fin+i);
    }

    scanf("%*c");

    return 0;
}

void print_codes(char * str) {

    int i = 0;

    while(*(str+i) != '\0') {
        if (i != 0) printf(",");
        printf("%d", *(str+i));
    }
    printf("\n");
}
