#include <stdio.h>

int main() {

    int numero, fatorial;
    scanf("%d", &numero);


    if (numero == 0) printf("0! = 1");
    else {
        fatorial = 1;
        printf("%d", numero);
        while (numero > 0) {
            fatorial *= numero;
            numero--;
        }
    
        printf("! = %d", fatorial);

    }


    return 0;
}