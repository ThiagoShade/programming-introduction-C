#include <stdio.h>  

int main()  
{  
    int a=1;  
    int b=2;
    int *const ptr = &a; // Como ptr é um ponteiro constante, a variável para o qual ele apontará deve ser inicializado na declaração, assim como qualquer outra constante. 
    // ptr = &a;  //Isso não pode ser feito pois ptr é um ponteiro constante e não pode ter seu endereço alterado.
    // ptr = &b;  
    printf("Value of ptr is :%d\n",*ptr); 
    return 0;  
}