#include <stdio.h>

#define N 10

int main() {

    int i, j;
    int l = -1, c = -1;
    int matriz[N][N];

    while (l <= 0 || l > 10) scanf("%d", &l);
    while (c <= 0 || c > 10) scanf("%d", &c);

    for (i = 0; i < l ; i++) {
        printf("linha %d: ", i+1);
        for (j = 0; j < c; j++) {
            scanf("%d", *(matriz+i)+j);
            if (j != 0) printf(",");
            printf("%d", *(*(matriz+i)+j));
        }
        printf("\n");
    }

    return 0;
}