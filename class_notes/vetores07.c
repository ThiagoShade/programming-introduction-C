/*
Problema 2: Leia um texto de até 1024
caracteres e imprima o texto em maiúsculo. 
*/

#include <stdio.h>

int main() {

    int i = 0;
    char str[1025];

    scanf("%[^\n]%*c", str); // Lê todo o texto até um \n e excluindo o \n do buffer.

    while (str[i] != '\0') {

        if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;

        i++;
    }

    return 0;
}