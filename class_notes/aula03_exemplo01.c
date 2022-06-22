#include <stdio.h>

int main() {

    int N;

    printf("inicio da contagem regressiva (0-6): ");
    scanf("%d", &N);

    switch (N) {
        case 6:
            printf("Seis\n");
        case 5:
            printf("Cinco\n");
        case 4:
            printf("Quatro\n");
        case 3:
            printf("Três\n");
        case 2:
            printf("Dois\n");
        case 1:
            printf("Um\n");
        case 0:
            printf("Zero\n");
    }

}