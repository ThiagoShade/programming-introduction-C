#include <stdio.h>

int main() {

    int i, cont;
    float x1, x2, x3, buf;

    scanf("%d\n%f\n%f\n%f", &i, &x1, &x2, &x3);

    for (cont = 0; cont < 2; cont++) {
        if (x3 <= x2) {
            buf = x2;
            x2 = x3;
            x3 = buf;
        }
        if (x2 <= x1) {
            buf = x1;
            x1 = x2;
            x2 = buf;
        }
    }

    if (i == 1) {
        printf("%.2f %.2f %.2f\n", x1, x2, x3);
    }
    if (i == 2) {
        printf("%.2f %.2f %.2f\n", x3, x2, x1);
    }
    if (i == 3) {
        printf("%.2f %.2f %.2f\n", x2, x3, x1);
    }
    return 0;
}