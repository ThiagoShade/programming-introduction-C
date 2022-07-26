    #include <stdio.h>
     
    int main() {
     
        int i, i2, i3;
        int linhas, troca, qtd_letras;
        char texto[1001], aux;
     
        scanf("%d%*c", &linhas);
     
        for (i = 0; i < linhas; i++) {
     
            scanf("%[^\n]%*c", texto);
     
            i2 = 0;
            while (*(texto+i2) != '\0') {
     
                if ((*(texto+i2) >= 65 && *(texto+i2) <= 90) || (*(texto+i2) >= 97 && *(texto+i2) <= 122)) *(texto+i2) += 3;
     
                i2++;
            }
     
            qtd_letras = i2;
            i2--;
            
     
            troca = i2/2;
            if (i2%2 != 0) troca++;
     
            for (i3 = 0; i3 < troca; i3++) {
                aux = *(texto+i3);
                *(texto+i3) = *(texto+i2);
                *(texto+i2) = aux;
                i2--;
            }
     
            if (qtd_letras%2 != 0) i2--;
     
     
            while (*(texto+i2+1) != '\0') {
                (*(texto+i2+1))--;
                i2++;
            }
     
            printf("%s\n", texto);
     
        }
     
     
     
     
        return 0;
    }
