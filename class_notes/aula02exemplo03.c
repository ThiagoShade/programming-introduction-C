#include <stdio.h>

int main() { // Teste de como os caracteres podem sofrer interferência por teclas na função scanf
    int x;
    char CH1, CH2;

    scanf("%c %c", &CH1, &CH2);
    printf("Caracteres: (%c),(%c)\n", CH1, CH2); 

    scanf("%d %c", &x, &CH1);
    printf("Caracteres: %d,(%c)\n", x, CH1); //Se tentarmos 10 e algum caractere haverá confusão, já que o espaço será considerado. 

    scanf("%d", &x);
    scanf("%c", CH1); // Gambiarra, nem sei oq tá acontecendo aq
    scanf("%c", CH1);
    printf("Caracteres: %d,(%c)\n", x, CH1);


    scanf("%d%*c", &x, &CH1); //jeito "certo" de arrumar
    printf("Caracteres: %d,(%c)\n", x, CH1);
}