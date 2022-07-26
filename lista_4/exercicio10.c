#include <stdio.h>

int main() {

    int i;
    int maior = 0, menor = 0; // Se não der tudo certo, provavelmente é por causa dessa inicialização que não considera o maior ou menor como número negativo.
    int tam_vet = 0, numeros[1000];

    scanf("%d", &tam_vet);

    for (i = 0; i < tam_vet ; i++) {

        scanf("%d", &numeros[i]);

        if (i != 0) printf(" ");
        printf("%d", numeros[i]);

        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        }

        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
        
    }

    printf("\n");
    i--;

    for (i; i >= 0; i--) {
        
        if (i + 1 != tam_vet) printf(" ");
        printf("%d", numeros[i]);
    
    }

    printf("\n");
    printf("%d\n%d\n", maior, menor);

    return 0;
}