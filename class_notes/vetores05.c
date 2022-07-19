#include <stdio.h>

int main() {

    char texto[129];

    scanf("%[^x]", texto); // Lê tudo até aparecer um caractere "x".

    printf("%s", texto);



    return 0;
}