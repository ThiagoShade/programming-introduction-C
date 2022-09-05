#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "poly.h"
/**
 * @brief Função que copia uma string e coloca seu conteúdo em outra
 * 
 * @param s1 string que terá seu conteúdo copiado
 * @param s2 string que receberá o conteúdo
 */
void copy_str(char * s1, char * s2);



Poly * poly_read(char * p_let, int * qtd_pol){

    Poly * p = NULL;

    int ver;
    int dig_e, ex, maior_e, dig_c;
    int i, j, k, l;
    char id[20], buffer[1001];
    int qtd_e = 0;
    int * exp;
    double * coefi, co;
    char co_c[10];

    *(qtd_pol) = 0;
    p = calloc(1, sizeof(Poly));

    while(1) {
        scanf("%c", p_let);
        p_let[1] = '\0';
        if (*(p_let) >= '0' && *(p_let) <= '9') {
            break; // Verifica se ele já parou a lista de polinômios
        }

        (*qtd_pol)++;

        memset(id, 0, 20);
        memset(buffer, 0, 1001);

        scanf("%[^:]%*c%*c", id); // Lê o resto do identificador, dispensa o ':' e dispensa o ' '.
        if (*(qtd_pol) != 1) p = (Poly *) realloc(p, *(qtd_pol)*sizeof(Poly)); // realoca espaço para mais um polinômio sem perder os anteriores.

        if (id[0] == '\0') scanf("%*c%*c");

        p[*(qtd_pol)-1].id = (char *) calloc(strlen(id)+2, sizeof(char)); // aloca espaço para o identificador do polinômio

        p[*(qtd_pol)-1].id[0] = *(p_let); // Colocando a primeira letra no identificador
        
        copy_str(id, (*(p+*(qtd_pol)-1)).id+1); // Copia o nome do polinômio, mas é necessário passar mais uma posição pois a primeira etapa já leu uma letra.

        scanf("%[^\n]%*c", buffer); // Guarda toda a descrição do polinômio.

        i = 0;
        while(buffer[i] != '\0') {
            if (buffer[i] == '^') qtd_e++;
            i++;
        }
        exp = calloc(qtd_e, sizeof(int));
        coefi = calloc(qtd_e, sizeof(double));

        i = 0;
        j = 0;
        k = 0;
        qtd_e = 0;
        while(buffer[i] != '\0') { // Encontra qual o valor dos expoentes com coeficientes diferentes de 0 e guarda os coeficientes e os expoentes em um vetor.

            if (buffer[i] == '^') {
                
                k = i-2;
                ver = 0;
                while(1) { // Verifica se este monômio possui coeficiente 0 ou não;
                    if (buffer[k] == '+' || buffer[k] == '-' || k == -1) break;
                    if (buffer[k] != '0') ver = 1;
                    k--;
                }

                if (ver == 0) { // Caso o coeficiente seja zero, não coloca o expoente no vetor.
                    i++;
                    continue;
                }

                j++;
                dig_c = i-k-2;

                k = i-1-dig_c;
                for (l = 0; l < dig_c; l++) { // Calcula o valor do coeficiente a partir dos caracteres
                    co_c[l] = buffer[k];
                    k++;
                }

                co_c[l] = '\0';
                co = atof(co_c);

                if (buffer[i-dig_c-2] == '-') co = -co;
                coefi[j-1] = co;

                i++;
                k = i;
               
                while (1) { // Identifica quantos dígitos tem o expoente
                    if (buffer[k] == '+' || buffer[k] == '-' || buffer[k] == '\0') break;
                    k++;
                }
                dig_e = k-i;


                ex = 0;
                for (l = 0; l < dig_e; l++) { // Calcula o valor do expoente a partir dos caracteres
                    ex += (buffer[i]-48)*pow(10, dig_e-1-l);
                    i++;
                }

                exp[j-1] = ex;
            }

            if (buffer[i] == '\0') break;
            i++;

        }

        if (j == 0) { // Caso o polinômio não tenha nenhum coeficiente diferente de 0, o valor de p recebe -1, significando que o polinômio é nulo.
            p[*(qtd_pol)-1].p = -1;   
            continue;
        }


        maior_e = exp[0];
        for (i = 0; i < j; i++) {
            if (exp[i] > maior_e) maior_e = exp[i];
        }

        p[*(qtd_pol)-1].p = maior_e;

        p[*(qtd_pol)-1].coef = (double *) calloc(maior_e+1, sizeof(double));

        for(i = 0; i < j; i++) { // Coloca os coeficientes nas posições corretas dentro da estrutura do polinômio.
            p[*(qtd_pol)-1].coef[exp[i]] = coefi[i];
        }

        free(coefi);
        free(exp);

    }

    return p;
}

Poly * soma_poli(Poly * p1, Poly * p2) {

    int i;
    Poly * pr = NULL;
    int m_e;

    if (p1->p == -1) p1->coef = calloc(m_e+1, sizeof(double)); // Evito problemas de acessar memória não alocada
    if (p2->p == -1) p2->coef = calloc(m_e+1, sizeof(double));

    m_e = p1->p;
    if (p2->p > p1->p) { // Colocando espaço o suficiente em todos os polinômios para evitar problemas ao acessar memória não alocada.
        m_e = p2->p; 
        p1->coef = realloc(p1->coef, sizeof(double)*(m_e+1));
        
        memset(&p1->coef[p1->p+1], 0, sizeof(double)*(m_e-p1->p));
    } else if (p1->p > p2->p) {
        m_e = p1->p; 
        p2->coef = realloc(p2->coef, sizeof(double)*(m_e+1));
        
        memset(&p2->coef[p2->p+1], 0, sizeof(double)*(m_e-p2->p));
    }

    pr = calloc(1, sizeof(Poly));
    pr->coef = calloc(m_e+1, sizeof(double));
    pr->p = m_e;

    for (i = 0; i <= m_e; i++) {
        pr->coef[i] = p1->coef[i] + p2->coef[i];
    }

    if (p1->p == -1) free(p1->coef);
    if (p2->p == -1) free(p2->coef);

    return pr;
}

Poly * sub_poli(Poly * p1, Poly * p2) {

    int i;
    Poly * pr = NULL;
    int m_e;

    if (p1->p == -1) p1->coef = calloc(m_e+1, sizeof(double));  // Evito problemas de acessar memória não alocada
    if (p2->p == -1) p2->coef = calloc(m_e+1, sizeof(double));

    m_e = p1->p;
    if (p2->p > p1->p) { // Colocando espaço o suficiente em todos os polinômios para evitar problemas ao acessar memória não alocada.
        m_e = p2->p; 
        p1->coef = realloc(p1->coef, sizeof(double)*(m_e+1));
        
        memset(&p1->coef[p1->p+1], 0, sizeof(double)*(m_e-p1->p));
    } else if (p1->p > p2->p) {
        m_e = p1->p; 
        p2->coef = realloc(p2->coef, sizeof(double)*(m_e+1));
        
        memset(&p2->coef[p2->p+1], 0, sizeof(double)*(m_e-p2->p));
    }

    pr = calloc(1, sizeof(Poly));
    pr->coef = calloc(m_e+1, sizeof(double));
    pr->p = m_e;


    for (i = 0; i <= m_e; i++) {
        pr->coef[i] = p1->coef[i] - p2->coef[i];
    }

    if (p1->p == -1) free(p1->coef);
    if (p2->p == -1) free(p2->coef);

    return pr;
}

void norm_poli(Poly * p) {
    
    int i;
    int m_e;

    for(i = 0; i <= p->p; i++) {
        if (p->coef[i] != 0) m_e = i; 
    }

    p->p = m_e;
}

void print_poli(Poly * p) {

    int i = 0;

    while(p->coef[i] == 0) i++;
    

    for(i; i <= p->p; i++) {
        if ((int) p->coef[i] != 0) {
            printf("%d", (int) p->coef[i]);
            printf("x^%d", i);
        }
        if((i != p->p) && ((int) p->coef[i+1] > 0)) printf("+");
    }
    printf("\n");
}

void copy_str(char * s1, char * s2) {

    int i = 0;

    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';

}