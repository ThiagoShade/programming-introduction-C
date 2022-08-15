    #include <stdio.h>
     
    int main() {
     
        int i;
        int m[6][6] = {0, 63, 210, 190, -1, 190, 63, 0, 160, 150, 95, 10, 210, 160, 0, 10, 1, 10, 190, 150, 10, 0, 10, 20, 10, 95, 7, 21, 0, 80, 190, 2, -1, 41, 80, 0};
        int num, soma = 0, v[100] = {0};
        
        scanf("%d", &num);
     
        for (i = 0; i < num; i++) scanf("%d", v+i);
        
        for (i = 0; i < num-1; i++) {
     
            if (*((*(m+*(v+i)))+*(v+i+1)) == -1) {
                printf("rota invalida!\n");
                return 0;
            }
            soma += *(*(m+*(v+i))+*(v+i+1));
     
        }
     
        printf("%d\n", soma);
     
        return 0;
    }
