#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    int * pi = NULL;

    pi = (int *) malloc(sizeof(int)*a);
    free(pi);

    return 0;
}