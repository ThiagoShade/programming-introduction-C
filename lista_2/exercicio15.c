    #include <stdio.h>
     
    int main() {
     
        int i1, i2, i3, quantidade, numero3, medidor, quantidade_feita, numero1, numero2, soma_div1, soma_div2, div;
        scanf("%d", &quantidade);
     
        numero3 = 0;
        quantidade_feita = 0;
        numero1 = 1;
        while (quantidade_feita < quantidade) {
            // scanf("%d", &numero1);
     
            div = 1;
            soma_div1 = 0;
            for (i1 = (numero1 / 2) + 1; i1 > 0; i1--) { // Acha a soma dos divisores do numero1
                if (numero1 % div == 0) soma_div1 += div;
                div++;
            }
     
            // printf("%d\n", soma_div1);
     
            numero2 = soma_div1; // Número 2 recebe soma dos divisores do número 1 pra checar se ele é amigo do outro.
                
            div = 1;
            soma_div2 = 0;
            for (i3 = (numero2 / 2) + 1; i3 > 0; i3--) { // Acha os divisores do número2
                if (numero2 % div == 0) soma_div2 += div;
     
                div++;
            }
     
            if (soma_div1 == numero2 && soma_div2 == numero1) { // Checa se é amigo
                if (numero1 != numero2 && numero1 != numero3) { // Checa se não é o mesmo número ou se o par já não foi printado.
                    numero3 = numero2;
                    printf("(%d,%d)\n", numero1, numero2);


                    quantidade_feita++;
                }
            }
     
                // printf("%d %d %d %d\n", numero1, numero2, soma_div1, soma_div2);
                // printf("%d\n%d\n", soma_div1, soma_div2);[
            
            // break;
            numero1++;
        }
     
     
     
     
        return 0;
    }