#include <stdio.h>

int main() {

    int x;
    char CH1;

    scanf("%d %*c", &x, &CH1); //jeito "certo" de arrumar
    printf("Caracteres: %d,(%c)\n", x, CH1);

}