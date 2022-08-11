    #include <stdio.h>
    /**
     * @brief Verifica se uma matriz quadrada é permutação e soma todos os elementos dela
     * 
     * @param M endereço da matriz a ser verificada
     * @param n dimensão da matriz quadrada
     * @param soma ponteiro que aponta para uma variável que guardará a soma de todos os elementos da matriz
     * 
     * @return 0 se não é permutação, 1 se é permutação
     */
    int ehPermutacao(int M[500][500], int n, int * soma);
     
     
    int main() {
     
        int i, j;
        int M[500][500], tam;
        int soma = 0;
     
        scanf("%d", &tam);
     
        for(i = 0; i < tam; i++) {
            for (j = 0; j < tam; j++) scanf("%d", *(M+i)+j);
        }
     
        printf("%d\n", tam);
        if (ehPermutacao(M, tam, &soma) == 1) printf("PERMUTACAO\n");
        else printf("NAO EH PERMUTACAO\n");
        printf("%d\n", soma);
     
     
        return 0;
    }
     
    int ehPermutacao(int M[500][500], int n, int * soma) {
     
        int l, c;
        int nulos, um;
        int ver = 1;
     
        for(l = 0; l < n; l++) {
            nulos = 0;
            um = 0;
            for(c = 0; c < n; c++) {
                if (*(*(M+l)+c) == 0) nulos++;
                if (*(*(M+l)+c) == 1) um++;
                *soma += *(*(M+l)+c);
            }
     
            if ((nulos != (n - 1)) || (um != 1)) ver--; 
        }
     
        if (ver == 1) return 1;
        else return 0;
    }
