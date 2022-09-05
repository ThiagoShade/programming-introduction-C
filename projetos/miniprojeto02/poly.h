typedef struct polynomio {
    char *id; // string com o nome do polinômio
    int p; // grau do polinômio (maior expoente com coeficiente diferente de 0)
    double * coef; // vetor de coeficientes do polinômio
} Poly;

/**
 * @brief Essa função lê polinômios e monta de acordo com os expoentes, até que seja inserido o número de operações a serem realizadas.
 * 
 * @param p_let ponteiro que guardará um dos dígitos da quantidade de operações que serão feitas.
 * @param qtd_pol ponteiro pra variável que guarda quantidade de polinômios lidos pela função
 * 
 * @return endereço de onde os polinômios estão alocados
 */
Poly * poly_read(char * p_let, int * qtd_pol);

/**
 * @brief Soma dois polinômios
 * 
 * @param p1 polinômio 1 a ser somado
 * @param p2 polinômio 2 a ser somado
 * 
 * @return endereço do polinômio resultante 
 */
Poly * soma_poli(Poly * p1, Poly * p2);

/**
 * @brief subtrai dois polinômios
 * 
 * @param p1 polinômio 1 que será subtraído
 * @param p2 polinômio 2 a ser subtraído
 * 
 * @return endereço do polinômio resultante 
 */
Poly * sub_poli(Poly * p1, Poly * p2);

/**
 * @brief Esta função corrige o grau de um polinômio resultante de uma operação para caso esse grau tenha diminuído
 * 
 * @param p endereço do polinômio
 */
void norm_poli(Poly * p);

/**
 * @brief Printa um polinômio
 * 
 * @param p polinômio a ser printado
 */
void print_poli(Poly * p);
