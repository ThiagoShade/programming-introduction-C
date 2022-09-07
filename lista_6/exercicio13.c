#include <stdio.h>
#include <math.h>

typedef struct {
    float real;
    float imag;
} Complex;

typedef struct {
    Complex x1;
    Complex x2;
} RaizEqu2;

/**
 * @brief Função que calcula as raízes de uma equação do segundo grau.
 * 
 * @param a coeficiente quadrado
 * @param b coeficiente linear
 * @param c constante
 * @return estrutura RaizEqu2 com dois números complexos.
 */
RaizEqu2 calcula_raiz_equ_2(float a, float b, float c);

/**
 * @brief Imprime números complexos na saída padrão do sistema. A impressão segue o formato
 * a + bi, onde a é parte real e b a imaginária. Os valores são apresentados
 * somente se forem diferente de zero. No caso de a e b forem zero, o valor 0 é
 * apresentado. Se o valor de b for 1 ou -1, somente o caracter i ou -i é apresentado.
 * 
 * @param c Número complexo a ser impresso
 */
void complex_print(Complex c);

int main() {

    float a, b, c;
    RaizEqu2 r;

    scanf("%f %f %f", &a, &b, &c);

    r = calcula_raiz_equ_2(a, b, c);
    
    printf("x1 = ");
    complex_print(r.x1);
    printf("\n");
    printf("x2 = ");
    complex_print(r.x2);
    printf("\n");

    return 0; 
}

RaizEqu2 calcula_raiz_equ_2(float a, float b, float c){

    RaizEqu2 r;
    float delta;

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        r.x1.real = -b/(2*a);
        r.x1.imag = sqrt(-delta)/(2*a);
        r.x2.real = -b/(2*a);
        r.x2.imag = -sqrt(-delta)/(2*a);
    } else {
        r.x1.real = (-b + sqrt(delta)) / (2*a);
        r.x1.imag = 0;
        r.x2.real = (-b - sqrt(delta)) / (2*a);
        r.x2.imag = 0;
    }

    return r;
}

void complex_print(Complex c) {

    if (c.real == 0) {
        if (c.imag == 0) printf("0.00");
        if (c.imag > 0) {
            if (c.imag == 1) printf("i");
            else printf("+%.2fi", c.imag);
        }
        if (c.imag < 0) {
            if (c.imag == -1) printf("-i");
            else printf("%.2fi", c.imag);
        }
    } else {
        if (c.imag == 0) printf("%.2f",c.real);
        if (c.imag > 0) {
            if (c.imag == 1) printf("%.2f+i", c.real);
            else printf("%.2f+%.2fi", c.real, c.imag);
        }
        if (c.imag < 0) {
            if (c.imag == -1) printf("%.2f-i", c.real);
            else printf("%.2f%.2fi", c.real, c.imag);
        }
    }
} 