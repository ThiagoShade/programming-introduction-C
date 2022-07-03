#include <stdio.h>
void swap(int x, int y);
void swapp(int* pa, int* pb);

void swap (int x, int y) {
   
    int t;
    t = x;
    x = y;
    y = t;

}

void swapp (int* pa, int* pb) {

    int t;

    t = *pa;
    *pa = *pb;
    *pb = t;

}

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
