#include <iostream>
#include <iomanip> // para funcionamento do setprecision.
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    double horas, km_h, litros;
    std::cout << std::fixed;
    std::cout << setprecision(3);
    cout << "Informe o tempo de viagem em horas: ";
    cin >> horas;
    cout << "Informe a velocidade média em Km/h: ";
    cin >> km_h;

    litros = (horas * km_h) / 12;

    cout << litros;

    return 0;
}