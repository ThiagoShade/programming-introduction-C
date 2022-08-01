#include <stdio.h>

int main() {

    int i;
    int alunos, pres_min, presentes = 0;
    int vetor_presentes[1000], aluno_atual;

    scanf("%d%d", &alunos, &pres_min);

    for (i = 0; i < alunos; i++) {
        scanf("%d", &aluno_atual);
        if (aluno_atual <= 0) {
            
            vetor_presentes[presentes] = i+1;
            presentes++;

        }
    }

    if (presentes < pres_min) printf("SIM\n");
    else {
        printf("NAO\n");
        for (i = presentes-1; i > -1; i--) {
            printf("%d\n", vetor_presentes[i]);
        }
    }


    return 0;
}