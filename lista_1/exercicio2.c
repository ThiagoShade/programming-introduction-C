#include <stdio.h>

int main() {
	
	float temp_f, temp_c, chuva_pol, chuva_mm;
	scanf("%f", &temp_f);
	scanf("%f", &chuva_pol);
	temp_c = (5 * (temp_f - 32)) / 9;
	chuva_mm = chuva_pol * 25.4;
	printf("O VALOR EM CELSIUS = %.2f \n", temp_c);
	printf("A QUANTIDADE DE CHUVA E = %.2f \n",
	chuva_mm);
	
	return 0;
}

