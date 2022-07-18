#include <stdio.h>

int main() {

    int quantidade, i, i2, num1, num2, lixo, verificador;

    while (1) {
        
        scanf("%d", &quantidade);

        if (quantidade == 0) break;

        scanf("%d%d", &num1, &num2);

        if (num1 == num2) {
            printf("Nao intercalada\n");
            for (i = 0; i < quantidade - 2; i++) scanf("%d", &lixo);
            continue;
        }

        if (num1 < num2) verificador = 1;
        else verificador = 0;

        num1 = num2;
        if (verificador == 1) {
            for (i = 0; i < quantidade - 2; i++) {
                scanf("%d", &num2);
                if (i%2 == 0) {
                    if (num2 >= num1) {
                        for (i2 = i; i2 < quantidade - 3; i2++) {
                            scanf("%d", &lixo);
                        }
                        printf("Nao intercalada\n");
                        break;
                    }
                } else {
                    if (num2 <= num1) {
                        for (i2 = i; i2 < quantidade - 3; i2++) {
                            scanf("%d", &lixo);
                        }
                        printf("Nao intercalada\n");
                        break;
                    }
                }

                num1 = num2;
            } 
        } else {
            for (i = 0; i < quantidade - 2; i++) {
                scanf("%d", &num2);

                if (num1 == num2) {
                    printf("Nao intercalada\n");
                    break;
                }

                if (i%2 != 0) {
                    if (num2 >= num1) {
                        for (i2 = i; i2 < quantidade - 3; i2++) scanf("%d", &lixo);
                        
                        printf("Nao intercalada\n");
                        break;
                    }
                } else {
                    if (num2 <= num1) {
                        for (i2 = i; i2 < quantidade - 3; i2++) scanf("%d", &lixo);
                        
                        printf("Nao intercalada\n");
                        break;
                    }
                }

                num1 = num2;

            }

        }

        if (i == (quantidade - 2)) {
            printf("Intercalada\n");
        }

         
    }




    return 0;
}
