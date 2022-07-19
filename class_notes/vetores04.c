#include <stdio.h>

int main() {

    char V[129]; // 128 caracteres + \0 se eu estiver considerando como uma string.

    scanf("%s%*c", V); // Não preciso usar o & pq o próprio V é o ponteiro que aponta para a o vetor, o %*c é para ignorar o enter e tirar do buffer para não atrapalhar a próxima leitura.

    printf("%s\n", V); // Printará apenas a palavra antes do espaço.

    scanf("%[^\n]%*c", V); // Lendo textos com espaços até o primeiro \n, e jogando o \n no "lixo".

    printf("%s\n", V);

    return 0;
}