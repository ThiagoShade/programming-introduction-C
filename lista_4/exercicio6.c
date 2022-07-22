#include <stdio.h>

int main() {

    int i, i2;
    int vezes, erro1, erro2, erro3;
    int erros = 0;
    char palavra[6];
    char one[4] = {"one"}, two[4] = {"two"}, three[6] = {"three"};

    scanf("%d%*c", &vezes);

    for (i = 0; i < vezes; i++) {

        scanf("%[^\n]%*c", palavra);

        erro1 = 0;
        erro2 = 0;
        erro3 = 0;

              
        i2 = 0;
        while(*(palavra+i2) != '\0') {

            if (*(palavra+i2) != *(one+i2)) erro1++;
            if (*(palavra+i2) != *(two+i2)) erro2++;
            if (*(palavra+i2) != *(three+i2)) erro3++;


            i2++;
        }            

        if (erro1 <= 1) printf("1\n");
        if (erro2 <= 1) printf("2\n");
        if (erro3 <= 1 && i2 == 5) printf("3\n");



    }




    return 0;
}