#include <stdio.h>
void concat(char s1[], char s2[]);

int main() {

    char str[1024] = {"ola"};

    concat(str, "Mundo");

    printf("%s\n", str);


    return 0;
}

void concat(char s1[], char s2[]) {

    int i=0, c=0;

    while (*(s1+i) != '\0') i++; // Faz o processo começar a partir do \0;

    while (s2[c] != '\0') {
        *(s1+c+i) = *(s2+c);
        c++;
    }

    *(s1+c+i) = '\0';

}