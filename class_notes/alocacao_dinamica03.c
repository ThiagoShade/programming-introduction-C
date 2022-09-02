#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int i;
    int * v1;

    v1 = (int *) calloc(10, sizeof(int));

    v1[0] = 10;

    for(i = 0; i < 10; i++) printf("%d ", v1[i]);
    
    printf("\n");

    v1 = (int *) realloc(v1, sizeof(int) * 11);
    /* Serve para mudar o tamanho de uma memória 
    alocada sem perder os dados já guardados.
    */

    v1[10] = 20;

    for(i = 0; i < 11; i++) printf("%d ", v1[i]); 

    printf("\n");

    free(v1);
    return 0;
}