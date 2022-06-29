#include <stdio.h>

int main() {

    int i1, i2, i3, quantidade, medidor, quantidade_feita, numero1, numero2, soma_div1, soma_div2, div;
    scanf("%d", &quantidade);

    quantidade_feita = 0;
    numero1 = 1;
    while (quantidade_feita < quantidade) {
        // scanf("%d", &numero1);

        div = 1;
        soma_div1 = 0;
        for (i1 = (numero1 / 2) + 1; i1 > 0; i1--) {
            if (numero1 % div == 0) soma_div1 += div;
            div++;
        }

        // printf("%d\n", soma_div1);

        numero2 = numero1;
        for (i2 = numero1/2; i2 > 0; i2--) {
            
            div = 1;
            soma_div2 = 0;
            for (i3 = (numero2 / 2) + 1; i3 > 0; i3--) {
                if (numero2 % div == 0) soma_div2 += div;

                div++;
            }

            if (soma_div1 == numero2 && soma_div2 == numero1) {
                if (numero1 != numero2) {
                    printf("(%d,%d)\n", numero2, numero1);
                    quantidade_feita++;
                }
            }

            // printf("%d %d %d %d\n", numero1, numero2, soma_div1, soma_div2);
            // printf("%d\n%d\n", soma_div1, soma_div2);
            numero2--;
        }
        // break;
        numero1++;
    }




    return 0;
}
