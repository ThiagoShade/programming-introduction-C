#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int num;
    int den;
} tRacional;

/**
 * @brief Calcula o MDC de x e y
 * 
 * @param x 
 * @param y
 * 
 * @return MDC de x e y. 
 */
int MDC(int x, int y);

/**
 * @brief Recebe dois inteiros a e b e retorna o racional
 * 
 * @param a numerador
 * @param b denominador
 * 
 * @return 
 */
tRacional racional(int a, int b);

/**
 * @brief Recebe um racional e retorna o seu negativo (-r)
 * 
 * @param r numero racional
 * 
 * @return  
 */
tRacional negativo(tRacional r);

/**
 * @brief Recebe dois racionais e retorna a adição de ambos (r1 + r2).
 * 
 * @param r1 fator esquerdo da soma
 * @param r2 fator direito da soma
 * 
 * @return 
 */
tRacional soma(tRacional r1, tRacional r2);

/**
 * @brief Recebe dois racionais e retorna o produto de ambos (r1 * r2).
 * 
 * @param r1 primeiro fator do produto
 * @param r2 segundo fator do produto
 * 
 * @return
 */
tRacional mult(tRacional r1, tRacional r2);

/**
 * @brief Recebe dois racionais e retorna o quociente de ambos (r1/r2).
 * 
 * @param r1 numerador
 * @param r2 denominador
 * 
 * @return
 */
tRacional divi(tRacional r1, tRacional r2);

/**
 * @brief Recebe um racional e reduz a fração ao máximo
 * 
 * @param r o número racional a ser reduzido
 * 
 * @return
 */
void reduzFracao(tRacional * r);

int main() {

    int num1, den1, num2, den2;
    char op;
    tRacional r1, r2, r3;


    while(scanf("%d %d %c %d %d", &num1, &den1, &op, &num2, &den2) != EOF) {        

        r1 = racional(num1, den1);
        r2 = racional(num2, den2);

        if(op == '+') r3 = soma(r1, r2);
        
        if(op == '-') {
            r2 = negativo(r2);
            r3 = soma(r1, r2);
        }

        if(op == '/') r3 = divi(r1, r2);
        
        if(op == '*') r3 = mult(r1, r2);
        
        reduzFracao(&r3);
        printf("%d %d\n", r3.num, r3.den);
    }


    return 0;
}

int MDC(int x, int y){
    int resto=1;
    while (resto != 0){
        resto=x%y;
        x=y;
        y=resto;
    }
    if(x<0) x=-x;
    return x;
}

tRacional racional(int a, int b) {
    tRacional r;

    r.num = a;
    r.den = b;

    return r;
}

tRacional negativo(tRacional r) {
    r.num = -r.num;

    return r;
}

tRacional soma(tRacional r1, tRacional r2) {

    tRacional r;
    int den;

    den = r1.den*r2.den;

    r1.num = r2.den * r1.num;
    r2.num = r1.den * r2.num;

    r.den = den;
    r.num = r1.num + r2.num;

    return r;
}

tRacional mult(tRacional r1, tRacional r2) {
    
    tRacional r;

    r.num = r1.num * r2.num;
    r.den = r1.den * r2.den;


    return r;
}

tRacional divi(tRacional r1, tRacional r2) {

    tRacional r;

    r.num = r1.num * r2.den;
    r.den = r1.den * r2.num;


    return r;
}

void reduzFracao(tRacional * r) {

    int m;

    m = MDC(r->num, r->den);

    r->num /= m;
    r->den /= m;
}