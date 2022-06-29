#include <stdio.h>

int main() {

    int linhas, colunas, i_linhas, i_pares, contador_linha, contador_coluna;
    scanf("%d%d", &linhas, &colunas);

    // if (colunas == 1) não tem diagonal

    contador_linha = 1;
    for (i_linhas = linhas - 1; i_linhas > 0; i_linhas--) { // linhas
        contador_coluna = 1;
        if (contador_linha <= colunas) {
            for (i_pares = contador_linha; i_pares > 0; i_pares--) { // pares de índices
                printf("(%d,%d)", contador_linha + 1, contador_coluna);
                if (contador_linha > 1 && contador_coluna != contador_linha) printf("-");
                contador_coluna++;
            }
        } else {
            for (i_pares = colunas; i_pares > 0; i_pares--) {
                printf("(%d,%d)", contador_linha + 1, contador_coluna);
                if (contador_coluna < colunas) printf("-");
                contador_coluna++;
            }
        }
        printf("\n");
        contador_linha++;
    }
    

    return 0;
}
