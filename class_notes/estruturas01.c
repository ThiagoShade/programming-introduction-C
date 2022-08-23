/*
cachorro
    -> idade (int)
    -> nome (char *)
    -> sexo (char)
    -> raça (char *)

carro
    -> modelo (char *)
    -> motor (float)
    -> cor (char)
    -> chassi (char *)

data
    -> dia (int)
    -> mês (int)
    -> ano (int)

pessoa
    -> nome (char *)
    -> idade (int)
    -> sexo (char)
    -> dat_nasc (data)
    -> CPF (char *)
    -> carro (carro)
    -> data_vacinação (data)

*/

#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

void data_print(struct data d);

int main() {


    struct data nasc, vacina;

    nasc.dia = 14; // Acessando um elemento interno da variável nasc que é do tipo struct data.
    nasc.mes = 1;
    nasc.ano = 2004;
    vacina.dia = 22;

    data_print(nasc);

    return 0;
}

void data_print(struct data d) {

    printf("%d/%d/%d\n", d.dia, d.mes, d.ano);


}