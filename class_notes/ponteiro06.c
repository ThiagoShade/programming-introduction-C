#include <stdio.h>

int main() {

    int n = 10;
    void * ptr = &n; // Pode apontar para qualquer tipo de dado.

    // printf("%d", *ptr); 
    /* Isso não pode ser feito 
    pois precisamos "typecast", ou seja,
    explicitar o tipo antes de extrair o 
    conteúdo ou fazer operações com
    qualquer ponteiro void. 
    */

   printf("%d\n", *(int*)ptr); // Typecasting the pointer.


    /*
    Void pointers are useful because
    they help to allocate memory dinamically
    (that I will study in the future) because
    you can pass any type of data to malloc() calloc()
    etc, and these functions will work to any type
    of data, without needing a lot of functions or
    a lot of pointers.
    */


    return 0;
}