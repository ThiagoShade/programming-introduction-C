#include <stdio.h>

#define N 10

int main() {

    int i, j, l, c;
    int M[N][N];
    int l_at, c_at;


    
    scanf("%d%d", &l, &c);

    if (l > 10 || l < 1 || c > 10 || c < 1) {
        printf("Dimensao invalida\n");
        return 0;
    }
        
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) scanf("%d", *(M+i)+j);
    }


    return 0;
}