#include <stdio.h>
#include <string.h>
/**
 * @param str vetor de caracteres onde a string lida será gravada
 * @param n quantidade máxima de caracteres a ser lidos
 * @return quandidade de caracteres lidos
 */
int le_string(char * str, int n);
/**
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

    int i = 0, i2 = 0, i3, cont;
    char texto[129] = {'\0'};
    char aux;

    memset(str, 0, N); 

    scanf("%c", &texto[0]); // Nesse bloco eu considero os \r e \n da leitura anterior e coloca na string para que o while (1) que vem depois não pare.
    if (*(texto) == '\n') i++;
    else if (*(texto) == '\r') {
        scanf("%c", &texto[1]);
        i += 2; 
    } else i++;
    
    while (1) { // Lendo caractere por caractere até chegar no \n após o texto.
        scanf("%c", &texto[i]);
        
        if (*(texto+i) == '\n') {
            i++;
            break;
        }

        i++;
    }

    while (1) { // Tirando todos os \r e \n e reajustando a string.

        if (*(texto+i2) == '\n' || *(texto+i2) == '\r') {
            cont = i2;
            for (i3 = 0; i3 < i-cont+1; i3++) {
                *(texto+i2) = *(texto+i2+1);
                i2++;
            }
            i2 = 0;
        }

        if(*(texto+i2) == '\0') break;

        i2++;
    }

    for (i3 = 0; i3 < n; i3++) *(str+i3) = *(texto+i3); // Colocando na string objetivo.

    return n;

}

void print_codes(char * str) {

    int i;

    for (i = 0; i < strlen(str); i++) {
        if (i != 0) printf(",");
        printf("%d", *(str+i));
    }

    printf("\n");
}
