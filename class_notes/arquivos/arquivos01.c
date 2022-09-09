#include <stdio.h>

int main() {

    FILE * a = NULL; // Necessário para guardar o endereço de onde o fluxo foi aberto
    int c;
    char str[128];

    /* Primeira operação a ser executada sobre o fluxo é o fopen, é necessário o caminho
    do arquivo ou caso seja usado apenas o nome é procurado na pasta corrente do programa.
    O segundo parâmetro determina o modo de operação com que queremos abrir o programa.
    r - leitura sequencial
    w - escrita sequencial
    a - somente escrita
    r+ - leitura e escrita, se o arquivo não existir retorna NULL, acesso aleatório.
    w+ - leitura e escrita, se o arquivo não existe ele é criado, se existe ele limpa seu conteúdo, acesso aleatório
    a+ - leitura e escrita, se o arquivo não existe ele é criado, se existe ele mantém o conteúdo, acesso aleatório.
    ...
    wb - escrita em binário
    ...
    */
    a = fopen("aula", "r");
    if (a == NULL) return 0;

    while(1) {
        c = fgetc(a); // c recebe a leitura de cada caractere, caso não tenha mais caractere a função retorna EOF.
        if (c == EOF) break;
        printf("%c", c);
    }
    printf("\n");

    fclose(a);
    a = fopen("aula", "r");

    while(1) {
        c = fscanf(a, "%s", str); // primeiro argumento variável FILE, segundo argumentos do scanf, terceiro str a ser guardada.
        if (c == EOF) break;
        printf("%s\n", str);
    }

    fclose(a); // Para fechar o arquivo passa o ponteiro

    return 0;
}
