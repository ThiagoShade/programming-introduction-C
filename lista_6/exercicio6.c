#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    int nasc_dia;
    int nasc_mes;
    int nasc_ano;
    char nome[201];
} aluno;

/**
 * @brief Troca todas as informações do aluno de uma posição com as informações do aluno da posição seguinte
 * 
 * @param v 
 */
void switch_aluno_prox(aluno * v);

int main() {

    int i, j;
    int qtd_alunos;
    aluno * a = NULL;

    scanf("%d", &qtd_alunos);

    a = calloc(sizeof(aluno), qtd_alunos);

    for (i = 0; i < qtd_alunos; i++) {
        scanf("%d", &a[i].matricula);
        scanf("%d %d %d%*c", &a[i].nasc_dia, &a[i].nasc_mes, &a[i].nasc_ano);
        scanf("%[^\n]%*c", a[i].nome);
    }

    for (i = 0; i < (qtd_alunos-1); i++) {
        for (j = 0; j < (qtd_alunos-1); j++) {
            if(a[j].nasc_ano < a[j+1].nasc_ano) {
                switch_aluno_prox(a+j);
                continue;
            } else if (a[j].nasc_ano == a[j+1].nasc_ano) {
                if (a[j].nasc_mes < a[j+1].nasc_mes) {
                    switch_aluno_prox(a+j);
                    continue;
                } else if (a[j].nasc_mes == a[j+1].nasc_mes) {
                    if (a[j].nasc_dia < a[j+1].nasc_dia) {
                        switch_aluno_prox(a+j);
                        continue;
                    }
                }
            } 
            
        }
    }

    for (i = 0; i < qtd_alunos; i++) {
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", a[i].matricula, a[i].nome, a[i].nasc_dia, a[i].nasc_mes, a[i].nasc_ano);
    }

    free(a);

    return 0;
}

void switch_aluno_prox(aluno * v) {

    aluno aux;

    aux = *(v);
    *(v) = *(v+1);
    *(v+1) = aux;
}
