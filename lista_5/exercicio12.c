    #include <stdio.h>
    #include <string.h>
     
    #define MAX_WORDS 200
    #define MAX_WORD_LEN 64+1
    /**
     * @brief Função de separação de palavras de acordo com a uma lista de separadores.
     * Exemplo de chamada da função:
     * str_split("Ola mundo! 1,23", m, ", .!?");
     *
     * O resultado é a separação das strings "Ola", "mundo", "1", "23", cada uma
     * ocupando uma linha da matriz m, com base nos caracteres de pontuação fornecidos.
     *
     * @param str ponteiro para o início da string original
     * @param m matriz de caracteres, sendo cada linha uma palavra da string original
     * @param sep string com a lista de caracteres separadores
     * @return int quantidade de palavras detectadas
     */
    int str_split(char * str, char m[][MAX_WORD_LEN], char * sep);
     
    int main() {
     
        int i;
        int qtd, tam, tam_maior = 0, qtd_maior = 0;
        char texto[MAX_WORDS*MAX_WORD_LEN] = {'\0'}, palavras[MAX_WORDS][MAX_WORD_LEN], separadores[64] = {'\0'};
     
        scanf("%[^\n]%*c", texto);
        scanf("%[^\n]", separadores);
     
        memset(palavras, 0, MAX_WORDS*MAX_WORD_LEN);
     
        qtd = str_split(texto, palavras, separadores);
     
        for (i = 0; i < qtd; i++) {
            tam = strlen(*(palavras+i));
            printf("(%d)%s\n", tam , *(palavras+i));
            if (tam > tam_maior) tam_maior = tam;
        }
     
        for (i = 0; i < qtd; i++) {
            if (tam_maior == strlen(*(palavras+i))) qtd_maior++;
        }
     
        printf("%d\n", qtd_maior);
     
        return 0;
    }
     
    int str_split(char * str, char m[][MAX_WORD_LEN], char * sep) {
     
        int i = 0, j;
        int qtd = 0, qtd_sep, pos = 0, pal = -1;
        int ver = 0;
     
        qtd_sep = strlen(sep);
     
        while (1) {
     
            if (*(str+i) == '\0') break;
            // if (ver == 1 && i != 1) pal++;
     
            for (j = 0; j < qtd_sep; j++) {
                if (*(str+i) == *(sep+j)) break;
            }
     
            if (j != qtd_sep) {
                pos = 0;
                ver++;
                i++;
                continue;
            }
     
            ver = 0;
     
            if (pos == 0) pal++;
     
            *(*(m+pal)+pos) = *(str+i);
            pos++;
     
     
            i++;
        }
     
        return pal+1;
     
    }
