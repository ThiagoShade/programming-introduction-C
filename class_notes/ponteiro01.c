#include <stdio.h>
void swap(int x, int y);
void swapp(int* pa, int* pb);

void swap (int x, int y) { // Essa função não altera os valores de a e b, pois o x e y são mudados mas os valores de a e b continuam os mesmos.
   
    int t;
    t = x;
    x = y;
    y = t;

}

void swapp (int* pa, int* pb) { // Já essa altera sim os valores, pois o escopo da função consegue alterar os valores na memória de a e b por meio dos ponteiros.

    int t;

    t = *pa;
    *pa = *pb;
    *pb = t;

}

/* 
Resumindo, uma das vantagens de trabalhar com ponteiros é poder trabalhar em diferentes
escopos de funções conseguindo acessar valores que estão em outros escopos com muito mais facilidade. 
*/


int main() {

    int a, b;

    a = 10;
    b = 20;
    
    printf("%d %d\n", a, b);

    swap(a,b);

    printf("%d %d\n", a, b);

    swapp(&a, &b);

    printf("%d %d\n", a, b);


    return 0;
}
