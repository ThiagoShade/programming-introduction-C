#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * @brief Converte a string str para o valor inteiro correspondente.
 * 
 * @param str string contendo um número inteiro.
 * @return o número inteiro correspondente.
 */
long int string2int(const char * str);

int main() {

    char str[129];
    long int n;

    while (scanf("%s", str) != EOF) {

        n = string2int(str);
        
        printf("%ld %ld\n", n, n*2);

    }




    return 0;
}

long int string2int(const char * str) {

    int i = 0, tamanho, peso;
    int negativo = 0;
    int dig;
    long int num = 0;

    tamanho = strlen(str);
    peso = tamanho - 1;

    if (*(str) == '-') {
        negativo = 1;
        peso--;
        i++;
    }

    

    for (i; i < tamanho; i++) {

        dig = *(str+i) - 48;
        num += dig * pow(10, peso);
        peso--;

    }


    if (negativo == 1) return -num;
    else return num;
}