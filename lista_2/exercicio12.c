#include <stdio.h>

int main() {

    int n, hipotenusa, i1, i2, i3, cateto1, cateto2;
    
    scanf("%d", &n);

    hipotenusa = 2;
    for (i1 = n - 1; i1 > 0; i1--) {
       
        cateto1 = hipotenusa - 1;
        for (i2 = cateto1; i2 > 0; i2--) {

            cateto2 = cateto1;
            for (i3 = cateto1; i3 > 0; i3--) {
                
                if ((hipotenusa * hipotenusa) == (cateto1 * cateto1) + (cateto2 * cateto2)) {
                    if (cateto1 + cateto2 > hipotenusa) printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto2, cateto1);  

                }

                cateto2--;
            }

            cateto1--;
        }


        hipotenusa++;
    }

    return 0;
}