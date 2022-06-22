#include <stdio.h>
#include <string.h>

int main() {

	int n1, n2, n3, N, N_quadrado;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	if ( (0 <= n1 && n1 <= 9) && (0 <= n2 && n2 <= 9) && (0 <= n3 && n3 <= 9) )  {
		N = (n1 * 100) + (n2 * 10) + n3;
		N_quadrado = N * N;
		printf("%d, %d", N, N_quadrado);
	
	} else {
		printf("DIGITO INVALIDO"); 
	
	}



	return 0;
}
