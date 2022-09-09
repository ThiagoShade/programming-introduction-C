#include <stdio.h>

int main() {

    int x;
    FILE * a = NULL, * b = NULL;

    a = fopen("binarioin", "wb"); // wb para escrever em binário
    if (a == NULL) return 0;
    b = fopen("binarioout", "rb"); // rb para ler em binário
    if (b == NULL) return 0;

    x = 97;
    fwrite(&x, sizeof(int), 1, a); // Coloca os bits a partir do endereço de x, coloca 4 bytes de tamanho, uma única vez no arquivo mencionado.

    fread(&x, sizeof(char), 1, b); // Coloca os bits do conteúdo de um arquivo b no endereço da variável x, 1 byte, uma vez.

    printf("%c\n", x);


    fclose(a);
    fclose(b);

    return 0;
}