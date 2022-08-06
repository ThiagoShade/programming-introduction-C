#include <stdio.h>
#include <string.h>

int main() {

    int i;
    int dig_dado, dig_fin, n_acha;
    char v[100001], fin[100001], maior;
    int marc;

    while (1) {

        scanf("%d%d%*c", &dig_dado, &dig_fin);

        if (dig_dado == 0 && dig_fin == 0) break;

        memset(v, 0, 100001);
        memset(fin, 0, 100001);

        scanf("%s%*c", v);

        n_acha = dig_fin;
        while (1) {
            maior = v[0];
            marc = 0;
            for (i = 0; i < (strlen(v)-n_acha+1); i++) {
                if (v[i] > maior) {
                    maior = v[i];
                    marc = i;
                }
            }

            fin[dig_fin-n_acha] = maior;
            fin[dig_fin-n_acha+1] = '\0';

            i = 0;
            while(i != marc+1) {
                v[i] = '/';
                i++;
            }

            n_acha--;

            if (n_acha == 0) break;
        }
        
        printf("%s\n", fin);

    }

    
}
