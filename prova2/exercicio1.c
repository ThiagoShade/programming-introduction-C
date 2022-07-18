#include <stdio.h>
/**
 * @brief Verifica se em uma lista algum dos números é igual a posição na lista
 * 
 * @param participantes número de participantes
 * 
 * @return número da posição, ou -1 caso não tenha;
 */
int acha_indice(int participantes);

int main() {

    int participantes, teste = 1, i, posicao;

    while (1) {

        scanf("%d", &participantes);

        if (participantes == 0) break;

        posicao = acha_indice(participantes);

        if (posicao != -1) {
            printf("Teste %d\n", teste);
            printf("%d\n\n", posicao);
        } else {
            printf("Teste %d\n", teste);
            printf("Sem vencedor\n\n");
        }
        

        teste++;
    }

    return 0;
}

int acha_indice(int participantes) {

    int i, posicao, lixo;

    for (i = 1; i < participantes + 1; i++) {

            scanf("%d", &posicao);

            if (posicao == i) {
                while (i != participantes) {
                    scanf("%d", &lixo);
                    i++;
                }
                return posicao;
            }

            if (i == participantes) return -1;
        }
}
