/*
    Faça um programa que calcule a soma e a subtração
    de duas matrizes inteiras de até 10x10 elementos.
*/

#include <stdio.h>

#define N_MAX 10

/**
 * @brief Lê uma certa matriz de no máximo N_MAX linhas e colunas, com L linhas e C colunas.
 * 
 * @param M endereço da matriz a ser lida.
 * @param L número de linhas a ser lida.
 * @param C número de colunas a ser lida.
 */
void mat_read(int M[][N_MAX], int L, int C);

/**
 * @brief Checa se duas matrizes podem ser somadas.
 * 
 * @param nl1 número de linhas da matriz 1.
 * @param nc1 número de colunas da matriz 1.
 * @param nl2 número de linhas da matriz 2.
 * @param nc2 número de colunas da matriz 2.
 * 
 * @return 1 para ok, 0 para não ok.
 */
int dim_check(int nl1, int nc1, int nl2, int nc2);

/**
 * @brief Soma duas matrizes
 * 
 * @param M1 endereço de uma das matrizes a serem somadas.
 * @param M2 endereço de uma das matrizes a serem somadas.
 * @param R endereço da matriz que conterá o resultado.
 */
void mat_sum(int M1[][N_MAX], int M2[][N_MAX], int R[][N_MAX]);

/**
 * @brief Subtrai duas matrizes
 * 
 * @param M1 endereço de uma das matrizes a serem subtraídas.
 * @param M2 endereço de uma das matrizes a serem subtraídas.
 * @param R endereço da matriz que conterá o resultado.
 */
void mat_sub(int M1[][N_MAX], int M2[][N_MAX], int R[][N_MAX]);

/**
 * @brief Printa uma matriz
 * 
 * @param A endereço da matriz a ser printada
 * @param nl número de linhas da matriz
 * @param nc número de colunas da matriz
 */
void mat_print(int A[][N_MAX], int nl, int nc);

int main() {

    int i;
    int M1[N_MAX][N_MAX] = {0}, M2[N_MAX][N_MAX] = {0};
    int ADD[N_MAX][N_MAX] = {0}, SUB[N_MAX][N_MAX] = {0};
    int nl1, nc1, nl2, nc2;

    scanf("%d%d", &nl1, &nc1);
    if(nl1 < 1 || nl1 > N_MAX || nc1 < 1 || nc1 > N_MAX) {
        printf("Dimensões de matriz inválidas\n");
        return 0;
    }

    scanf("%d%d", &nl2, &nc2);
    if(nl2 < 1 || nl2 > N_MAX || nc2 < 1 || nc2 > N_MAX) {
        printf("Dimensões de matriz inválidas\n");
        return 0;
    }

    if (!dim_check(nl1, nc1, nl2, nc2)) {
        printf("Matrizes incompatíveis para soma e subtração.\n");
        return 0;
    }

    mat_read(M1, nl1, nl1);
    mat_read(M2, nl2, nc2);

    mat_sum(M1, M2, ADD);
    mat_sub(M1, M2, SUB);

    mat_print(ADD, nl1, nc1);
    mat_print(SUB, nl1, nc1);

    return 0;
}   

void mat_read(int M[][N_MAX], int L, int C) {

    int i, j;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) scanf("%d", &M[i][j]);
    }

}

int dim_check(int nl1, int nc1, int nl2, int nc2) {

    return (nl1 == nl2) && (nc1 == nc2);

}

void mat_sum(int M1[][N_MAX], int M2[][N_MAX], int R[][N_MAX]) {

    int i, j;

    for (i = 0; i < N_MAX; i++){
        for (j = 0; j < N_MAX; j++) R[i][j] = M1[i][j] + M2[i][j];
    }
}


void mat_sub(int M1[][N_MAX], int M2[][N_MAX], int R[][N_MAX]) {

    int i, j;

    for (i = 0; i < N_MAX; i++){
        for (j = 0; j < N_MAX; j++) R[i][j] = M1[i][j] - M2[i][j];
    }
}

void mat_print(int A[][N_MAX], int nl, int nc) {

    int i, j;

    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
}