#include <stdio.h>

int main() {

    int vezes, i, i2, i3;
    int sorteado[6], aposta[6];
    int acertos, sena = 0, quina = 0, quadra = 0;

    for (i = 0; i < 6; i++) scanf("%d", sorteado+i);

    scanf("%d", &vezes);

    for (i = 0; i < vezes; i++) {

        for (i2 = 0; i2 < 6; i2++) scanf("%d", aposta+i2);

        acertos = 0;
        for (i2 = 0; i2 < 6; i2++) {
            for (i3 = 0; i3 < 6; i3++) {
                if (*(aposta+i2) == *(sorteado+i3)) acertos++;
            }
        }

        if (acertos == 6) sena++;
        else if(acertos == 5) quina++;
        else if(acertos == 4) quadra++;


    }

    if (sena == 0) printf("Nao houve acertador para sena\n");
    else printf("Houve %d acertador(es) da sena\n", sena);
    if (quina == 0) printf("Nao houve acertador para quina\n");
    else printf("Houve %d acertador(es) da quina\n", quina);
    if (quadra == 0) printf("Nao houve acertador para quadra\n");
    else printf("Houve %d acertador(es) da quadra\n", quadra);

    return 0;
}