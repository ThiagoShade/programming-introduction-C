#include <stdio.h>  

int main()  
{  
    int a=1;  
    int b=2;
    int *const ptr = &a; // Como ptr é um ponteiro constante, a variável para o qual ele apontará deve ser inicializado na declaração, assim como qualquer outra constante. 
    // ptr = &a;  
    // ptr = &b;  //Isso não pode ser feito pois ptr é um ponteiro constante e não pode ter seu endereço alterado.
    printf("Valor de ptr é: %d\n",*ptr);

    *ptr = 3; // Já que ptr nesse caso não é um ponteiro para constante, podemos trocar o valor que está no endereço para o qual ele aponta.

    printf("Novo valor de ptr é: %d", *ptr);

    return 0;  
}