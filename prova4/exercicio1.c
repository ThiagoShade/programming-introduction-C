    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
     
    typedef struct {
        int matricula;
        int idade;
        int numFilhos;
        char sexo;
        double salario;
    } funcio;
     
    int main() {
     
        int i;
        int n;
        funcio * f;
        int sum_idade = 0, sum_filhos = 0;
        double m_idade, m_filhos;
        int qtd_r1 = 0, qtd_r2 = 0, qtd_r3= 0, qtd_r4 = 0;
     
     
        scanf("%d", &n);
     
        f = calloc(n, sizeof(funcio));
     
        for (i = 0; i < n; i++) {
            scanf("%d", &f[i].matricula);
            scanf("%d", &f[i].idade);
            scanf("%d%*c", &f[i].numFilhos);
            scanf("%c", &f[i].sexo);
            scanf("%lf", &f[i].salario);
     
            sum_idade += f[i].idade;
            sum_filhos += f[i].numFilhos;
        }
     
        m_idade = (double) sum_idade/n;
        m_filhos = (double) sum_filhos/n;
     
        for(i = 0; i < n; i++) {
            if (f[i].idade > m_idade) {
                if (f[i].salario > (3*1200)) qtd_r1++;
            }
     
            if (f[i].numFilhos > m_filhos) {
                if (f[i].sexo == 'F') qtd_r2++;
                else qtd_r3++;
            }
     
            if (f[i].idade > 47) {
                if ((f[i].salario/(f[i].numFilhos + 1) < (2*1200))) qtd_r4++;
            }
        }
     
        printf("%d %d %d %d\n", qtd_r1, qtd_r2, qtd_r3, qtd_r4);
     
     
        free(f);
     
        return 0;
    }
