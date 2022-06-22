#include <stdio.h>

int main(void) {

    int i;
    float x1, x2, x3, x4, buf;
    scanf("%f\n%f\n%f\n%f", &x1, &x2, &x3, &x4);
    
    for (i = 0; i < 3; i++) {
        if (x4 <= x3) {
            buf = x3;
            x3 = x4;
            x4 = buf;
        }
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

    printf("%.2f, %.2f, %.2f, %.2f", x1, x2, x3, x4);

    return 0;
}