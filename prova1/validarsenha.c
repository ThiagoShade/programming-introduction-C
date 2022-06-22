#include <stdio.h>

int main() {

    int senha;
    char categoria;

    scanf("%d %c", &senha, &categoria);

    if ((categoria != 'A') && (categoria != 'G') && (categoria != 'U')) printf("CATEGORIA INVALIDA: %c", categoria);
    else if (senha < 100000) printf("SENHA INVALIDA: %d - MINIMO 6 DIGITOS", senha); //Possível erro, primeiro dígito poderia ser 0.
    else {
        if (categoria == 'A') {
            if (senha == 321456) printf("ACESSO PERMITIDO A CATEGORIA A");
            else printf("ACESSO NEGADO");
        } else if (categoria == 'G') {
            if (senha == 9510753) printf("ACESSO PERMITIDO A CATEGORIA G");
            else printf("ACESSO NEGADO");
        } else {
            if (senha == 78955632) printf("ACESSO PERMITIDO A CATEGORIA U");
            else printf("ACESSO NEGADO");
        }
    }


    return 0;
}