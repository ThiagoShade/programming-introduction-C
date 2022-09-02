typedef struct car {
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    double city_mileage;
} car; /* Usando typedef para que criemos nosso próprio
tipo de dado "carro", sem especificar que é uma estrutura sempre.
*/

int main() {

    car c1; // Agora podemos declarar um carro apenas com "car".



    return 0;
}