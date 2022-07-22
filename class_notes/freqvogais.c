#include <stdio.h>
#include <string.h>
void freq_vogais(char * str, int * f);

int main() {

    int i;
    int f[5];
    char str[1024];

    scanf("%[^\n]%*c", str);

    freq_vogais(str, f);

    for (i=0; i<5; i++) {
        printf("%d\n", f[i]);
    }



    return 0;
}

void freq_vogais(char * str, int * f) {

    int i=0;

    memset(f, 0, 5*sizeof(int));

    while (*(str+i) != '\0') {
        
        if (*(str+i) == 'a' || *(str+i) == 'A') (*f)++;
        if (*(str+i) == 'e' || *(str+i) == 'E') (*(f+1))++;
        if (*(str+i) == 'i' || *(str+i) == 'I') (*(f+2))++;
        if (*(str+i) == 'o' || *(str+i) == 'O') (*(f+3))++;
        if (*(str+i) == 'u' || *(str+i) == 'U') (*(f+4))++;

        i++;
    }
}