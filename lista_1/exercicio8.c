#include <stdio.h>

int main () {
	
	int num, i;
	scanf("%d", &num);
	if ((num <= 0) || (num >= 1000) || (num % 10 == 0) || (num % 100 == 0)) {		
	} else {
		char num_inv[] = "000", num_str[3], xchar;
		for (i = 0 ; i < 3 ; i++) {
			sprintf(num_str, "%d", num);
			num_inv[2-i] = num_str[0 + i];
		}	
		printf("%s\n", num_inv);
	}
	
	return 0;
}

