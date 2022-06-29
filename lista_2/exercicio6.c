#include <stdio.h>

int main() {

    int sequencia, numero1, numero2, tamanho_seg1, tamanho_seg2;
  
    scanf("%d", &sequencia);
    scanf("%d", &numero1);

    tamanho_seg1 = 0;
    tamanho_seg2 = 0;
    sequencia--;

    for (sequencia; sequencia > 0; sequencia--) {

        scanf("%d", &numero2);
        if (numero1 < numero2) {
            tamanho_seg1++;
            if (sequencia == 1) tamanho_seg2 = tamanho_seg1;
        }
        else {
            if (tamanho_seg1 >= tamanho_seg2) tamanho_seg2 = tamanho_seg1;
            tamanho_seg1 = 0;
        }
        numero1 = numero2;

    }

    printf("O comprimento do segmento crescente maximo e: %d", tamanho_seg2 + 1);


    return 0;
}