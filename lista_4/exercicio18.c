    #include <stdio.h>
     
    int main() {
     
        int i = 0;
        char caractere;
     
        while (1) {
     
            if (scanf("%c", &caractere) == EOF) break;
     
            // if (caractere == EOF) break;
     
            if (caractere == '\n') {
                printf("%c", caractere);
                i = 0;
            } else if (caractere == ' ') printf("%c", caractere);
            else if (i == 0) {
                if (caractere >= 'a' && caractere <= 'z') caractere -= 32;
                printf("%c", caractere);
                i++;
            } else {
                if (caractere >= 'A' && caractere <= 'Z') caractere += 32;
                printf("%c", caractere);
                i--;
            }
        }
     
     
     
        return 0;
    }