#include <stdio.h>

int main() {

	int i, linha, pos;
	int M[6][6];
	int soma, maior;

	for (i = 0; i < 36; i++) scanf("%d", (*M)+i);


	for (i = 0; i < 16; i++) {

		linha = i/4;
		pos = i%3;
		soma = (*(*(M+linha)+pos)) + (*(*(M+linha)+pos+1)) + (*(*(M+linha)+pos+2)) + (*(*(M+linha+1)+pos+1)) + (*(*(M+linha+2)+pos)) + (*(*(M+linha+2)+pos+1)) + (*(*(M+linha+2)+pos+2));
		if (i == 0) maior = soma;
		if (soma > maior) maior = soma;

	}

	printf("%d\n", maior);


	return 0;
}
