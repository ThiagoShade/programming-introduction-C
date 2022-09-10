#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "poly.h"


Poly * poly_read(int q_p){

    int i;
    Poly * p = NULL;
    char nome[128], resto[1001];

    p = (Poly *) calloc(q_p, sizeof(Poly));

    for (i = 0; i < q_p; i++) {

        scanf("%[^:]%*c%*c", nome);
        scanf("%[^\n]%*c", resto);

        p[i].id = (char *) calloc(strlen(nome)+1, sizeof(char));

        copy_str(nome, p[i].id);

        p[i].p = acha_grau(resto);

        p[i].coef = (double *) calloc(p[i].p+1, sizeof(double));

        preen_coef(resto, p[i].coef);

    }

    return p;
    
}

int acha_grau(char * s) {

    int m_e = -1;
    int i = 0, k, j;
    char num_c[20];
    double num;

    while(s[i] != '\0') {

        if (s[i] == 'x') {
            k = i-1;
            while (1) {
                if (k == -1) {
                    k++;
                    break;
                }
                if (s[k] == '+' || s[k] == '-') break;
                k--;
            }

            j = 0;
            while (s[k] != 'x') {
                num_c[j] = s[k];
                k++;
                j++;
            }
            num_c[j] = '\0';
            num = atof(num_c);

            if(num != 0) {
                i += 2;
                j = 0;
                while(1) {
                    if (s[i] == '\0' || s[i] == '+' || s[i] == '-') break;
                
                    num_c[j] = s[i];

                    j++;
                    i++;
                }
                num_c[j] = '\0';

                num = atoi(num_c);
                if (num > m_e) m_e = num;

            }
            
        }

        if (s[i] == '\0') break;
        i++;
    }

    return m_e;
}

void preen_coef(char * s, double * c) {

    int i = 0, k = 0, j;
    char num_c[20];
    double coef;
    int e;

    while(s[i] != '\0') {
        if (s[i] == 'x') {
            k = i-1;
            while (1) {
                if (k == -1) {
                    k++;
                    break;
                }
                if (s[k] == '+' || s[k] == '-') break;
                k--;
            }

            j = 0;
            while (s[k] != 'x') {
                num_c[j] = s[k];
                k++;
                j++;
            }
            num_c[j] = '\0';
            coef = atof(num_c);


            if(coef != 0) {
                i += 2;
                j = 0;
                while(1) {
                    if (s[i] == '\0' || s[i] == '+' || s[i] == '-') break;
                
                    num_c[j] = s[i];

                    j++;
                    i++;
                }
                num_c[j] = '\0';

                e = atoi(num_c);

                c[e] = coef;

            }
            
        }

        if (s[i] == '\0') break;
        i++;
    }
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