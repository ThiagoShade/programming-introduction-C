#include <stdio.h>
#include <string.h>

int main() {
	int num;
	scanf("%d", &num);
	if (num >= 100000) {
		printf("NUMERO INVALIDO");
	} else {
		int i;
		char num_str[6], num_pal[6];
		sprintf(num_str, "%d", num);
		for (i = 0 ; i < strlen(num_str) ; i++) {
			num_pal[0 + i] = num_str[(strlen(num_str) - 1) - i];
			
		}
		if (strcmp(num_str, num_pal) == 0) {
			printf("PALINDROMO");
		} else {
			printf("NAO PALINDROMO");
		}
	}
	return 0;
}
