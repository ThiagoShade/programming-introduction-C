#include <stdio.h>
#define N 99
/**
 * @brief Printa uma matriz quadrada de char de tamanho máximo N
 *  
 * @param M matriz a ser printada
 * @param x tamanho da matriz quadrada a ser printada
 * 
 */
void print_mat(char M[][N], int x);


int main() {

    int i, j, aux;
    int tam;
    char bord, fund;
    char M[99][99];

    scanf("%d%*c%c%*c%c", &tam, &bord, &fund);

    if (tam % 2 == 0) {
        printf("Dimensao invalida!\n");
        return 0;
    }

    for (i = 0; i < tam; i++) {
        aux = i;
        if (i > (tam/2)) aux = tam - i - 1;
        for (j = 0; j < tam; j++) {
            if ((j < ((tam/2) - aux)) || (j > ((tam/2) + aux))) *(*(M+i)+j) = ' ';
            else if ((j > ((tam/2) - aux)) && (j < ((tam/2) + aux))) *(*(M+i)+j) = fund;
            else *(*(M+i)+j) = bord;
        }   


    }

    print_mat(M, tam);
    


    return 0;
}

void print_mat(char M[][N], int x) {

    int i, j;

    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) printf("%c ", *(*(M+i)+j));
        printf("\n");
    }

}