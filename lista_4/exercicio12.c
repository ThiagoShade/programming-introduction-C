#include <stdio.h>
#include <stdlib.h>
/**
 * @brief copia n caracteres de uma string e retorna o endereço de outra string apenas com n caracteres.
 * 
 * @param n número de caracteres que serão copiados
 * @param s endereço da string original.
 * @param n_s nova string que terá seu espaço alocado e que guardará a cópia dos n caracteres da string original.
 * 
 * @return endereço da string com apenas n caracteres da string original. 
 */
char * pref_string(int n, char s[]);



int main() {

    int i;
    int testes, num_char;
    char texto[500];
    char * v;

    scanf("%d%*c", &testes);

    for (i = 0; i < testes; i++) {
        scanf("%d%*c", &num_char);
        scanf("%[^\n]", texto);

        v = pref_string(num_char, texto);
        if (v != NULL) printf("%s\n", v);
        
        free(v);
    }


    return 0;
}

char * pref_string(int n, char s[]) {

    int i;
    char * n_s;

    n_s = (char *) calloc(n, sizeof(char));
    

    for (i = 0; i < n; i++) *(n_s+i) = *(s+i);
    

    return n_s;
}