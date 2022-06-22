#include <stdio.h>

int main(void) {

    int a, b, c, i, buf;
    char P1, P2, P3; 
 
    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c %c %c", &P1, &P2, &P3);

	for (i = 0; i < 2; i++) { //Definindo qual número é "a", "b" e "c", ou seja, ordenando crescentemente.
        if (c <= b) {
            buf = b;
            b = c;
            c = buf;
        }
        if (b <= a) {
            buf = a;
            a = b;
            b = buf;
        }
    }
		


    if ((int) P1 == 65) { //Verificando qual a ordem dada para printar os números.
        if ((int) P2 == 66) {
            printf("%d %d %d\n", a, b, c);
        } else {
            printf("%d %d %d\n", a, c, b);
        }
    } else if ((int) P1 == 66) {
        if ((int) P2 == 65) {
            printf("%d %d %d\n", b, a, c);
        } else {
            printf("%d %d %d\n", b, c, a);
        }
    } else {
        if ((int) P2 == 65) {
        printf("%d %d %d\n", c, a, b);
        } else {
            printf("%d %d %d\n", c, b, a);
        }
    }

    return 0;
}