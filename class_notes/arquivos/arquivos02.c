#include <stdio.h>
#include <string.h>

int main() {

    FILE * a = NULL, * b = NULL;
    char str[128], nome[128];
    int r;
    int idade;

    a = fopen("idadesin", "r");
    if (a == NULL) return 0;
    b = fopen("idadesout", "w");
    if (b == NULL) return 0;

    scanf("%s", nome);

    while (1) {
        r = fscanf(a, "%s %d", str, &idade);
        if (r == EOF) break;

        if (strcmp(str, nome) == 0) {
            printf("A idade de %s é: %d\n", nome, idade);
            fprintf(b, "Idade encontrada: %d\n", idade); // Coloca os dados no arquivo como se fosse um printf na tela
            break;
        }
    }

    fclose(a);
    fclose(b);


    return 0;
}