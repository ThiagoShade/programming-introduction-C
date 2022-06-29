#include <stdio.h>
     
int main() {
     
    int N, num, primo, div,contador, contador2, verificador_primo, verificador_divisao;
     
    primo = 2;
    contador = 0;
     
        
    while (1) {
        scanf("%d", &N);
        if (N < 2) printf("Fatoracao nao e possivel para o numero %d!\n", N);
        else break;
    } 
     
    num = N;
    while (num != 1) {
     
        div = primo;
        verificador_primo = 1;
        while (div > 1) {
            if (primo % div == 0) {
                if (div != primo) verificador_primo = 0;
            }
            if (verificador_primo == 1) break;
            div--;
        }
     
     
        if (num % primo == 0) {
            verificador_divisao = 1;
        }
        contador2 = 0;
        while (verificador_divisao == 1) {
            if (contador != 0 && num != 1 && contador2 != 0) printf(" x ");
            else if (contador == 0 && num != 1) printf("%d = ", N);
            if (num % primo == 0) {
                printf("%d", primo);
                num /= primo;
            } else verificador_divisao = 0;
            contador++;
            contador2++;
        }
            
        primo++;
    }
     
     
     
    return 0;
}