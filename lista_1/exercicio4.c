#include <stdio.h>

int main() {

	float a, b, c, d, det;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	det = (a * d) - (b * c);
	printf("O VALOR DO DETERMINANTE E = %.2f \n", det);
	
	return 0;
}
