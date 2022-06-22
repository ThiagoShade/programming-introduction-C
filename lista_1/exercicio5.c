#include <stdio.h>

int main() {

	float x1, x2, x3, buf;
    int i;	
	
	scanf("%f\n%f\n%f", &x1, &x2, &x3);
	
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
	
	printf("%.2f, %.2f, %.2f", x1, x2, x3);
	return 0;
}