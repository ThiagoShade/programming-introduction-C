#include <stdio.h>

int main() {

	float n1,n2,n3;
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);

	n3 = 3 * 6 - (n1 + n2);
	
	printf("O mínimo é: %f", n3);



	return 0;
}
