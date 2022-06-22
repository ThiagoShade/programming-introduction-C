#include <stdio.h>
#include <math.h>

int main() {

    int x2, y2, resultado2, aux1, aux2;
    double x, y, resultado, verificador1, verificador2, frac;
    char op;

    while (1) {
        scanf("%lf%c%lf", &x, &op, &y);
        x2 = x;
        y2 = y;
        // printf("%lf %lf\n", x, y);
        switch (op) {
            case '+':
                resultado = x + y;
                printf("%lf\n", resultado);
                break;
            case '-':
                resultado = x - y;
                printf("%lf\n", resultado);
                break;
            case '*':
                resultado = x * y;
                printf("%lf\n", resultado);
                break;
            case '/':
                if (y == 0) {
                    printf("Impossível dividir por 0!\n");
                } else {
                    resultado = x / y;
                    printf("%lf\n", resultado);
                }
                break;
            case '%':
                aux1 = x;
                aux2 = y;
                verificador1 = x - aux1;
                verificador2 = y - aux2;
                if ((verificador1 != 0.0) || (verificador2 != 0.0)) {
                    printf("Essa operação só pode ser feita com números inteiros!\n");
                } else {
                    resultado2 = x2 % y2;
                    printf("%d\n", resultado2);
                }
                break;
            case '~':
               /* if ((y2 - y) != 0) { //Verifica se o expoente é fracionário.
                    frac = y2 - y;
                    while ((frac - (int) frac) != 0) {
                        frac *= 10;
                    }
                    
                }
                */
                resultado = pow(x, y); //Dúvida, como fazer para impedir a raiz de índice par de número negativo.
                printf("%lf\n", resultado);
                break;  
            case '=':
                if (x == y) {
                    printf("true\n");
                } else {
                    printf("false\n");
                }
                break;
            case '!':
                if (x != y) {
                    printf("true\n");
                } else {
                    printf("false\n");
                }
                break;  
            case '<':
                if (x < y) {
                    printf("true\n");
                } else {
                    printf("false\n");
                }
                break;
            case '>':
                if (x > y) {
                    printf("true\n");
                } else {
                    printf("false\n");
                }
                break;
            case '^':
                if (((x != 0) && (x != 1)) || ((y != 0) && (y != 1))) {
                    printf("Essa operação só pode ser feita com 0 (Falso) e 1 (Verdadeiro)\n");
                } else if (x == 1 && y == 1) {
                    printf("true\n");
                } else {
                    printf("false\n");
                }
                break;
            case 'v':
                if (((x != 0) && (x != 1)) || ((y != 0) && (y != 1))) {
                    printf("Essa operação só pode ser feita com 0 (Falso) e 1 (Verdadeiro)\n");
                } else if (x == 0 && y == 0) {
                    printf("false\n");
                } else {
                    printf("true\n");
                }
                break;
            case 'x':   /* 
                        Isso aqui é a única coisa dando errado nos
                        casos 0x1 e 0x0, pois ele entende que depois 
                        do 0x virá um número hexadecimal e acaba não 
                        armazenando o operador e nem o segundo número.
                        Ainda não descobri ou não percebi como desconsiderar isso.
                        */
                printf("%lf %lf\n", x, y);
                if (((x != 0) && (x != 1)) || ((y != 0) && (y != 1))) {
                    printf("Essa operação só pode ser feita com 0 (Falso) e 1 (Verdadeiro)\n");        
                } else if (((x == 0) && (y == 1)) || ((x == 1) && (y == 0))) {
                    printf("true\n");
                } else {
                    printf("false\n");
                }
                break;
    }  
    }
    return 0;
}