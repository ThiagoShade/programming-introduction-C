#include <stdio.h>

int main() {

    int i, i2, vezes;
    int qtd, numero, numeros[100000] = {0};

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) scanf("%d", numeros+i);

    scanf("%d", &vezes);

    for (i = 0; i < vezes; i++) {
        scanf("%d", &numero);
        
        for (i2 = 0; i2 < qtd; i2++) {

            if (numero == *(numeros+i2)) { 
                printf("ACHEI\n");
                break;
            }
        }
        
        if (i2 == qtd) printf("NAO ACHEI\n");
    }




    return 0;
}
