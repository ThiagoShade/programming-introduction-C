#include <stdio.h>

int main() {

	int num, x, i;
	char binario[] = "00000000", xchar;
	scanf("%d", &num);
	if (!((num >= 0) && (num <= 255))) {
		printf("Numero invalido!");
	} else {

		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[7] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[6] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[5] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[4] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[3] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[2] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[1] = xchar;
		x = num % 2;
		xchar = x + '0';
		num = num / 2;
		binario[0] = xchar;

		printf("%s", binario);
	}
	return 0;
}