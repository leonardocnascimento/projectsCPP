#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    std::cout << std::fixed;
    std::cout << setprecision(2);
    int cachorroQuente = 1, xSalada = 2, xBacon = 3, torradaSimples = 4, refrigerante = 5, escolha, quantidade;
    double item1 = 4.00, item2 = 4.50, item3 = 5.00, item4 = 2.00, item5 = 1.50, conta;
    
    cout << "Informe qual item desejado: \n 1 - Cachorro Quente; \n 2 - X-Salada; \n 3 - X-Bacon; \n 4 - Torrada simples; \n 5 - Refrigerante." << endl;
    cin >> escolha;
    cout << "Informe a quantidade: ";
    cin >> quantidade;

    if (escolha == cachorroQuente) {
        conta = item1 * quantidade;
    } else {
        if (escolha == xSalada) {
            conta = item2 * quantidade;
        } else {
            if (escolha == xBacon) {
                conta = item3 * quantidade;
            } else {
                if (escolha == torradaSimples) {
                    conta = item4 * quantidade;
                } else {
                    if (escolha == refrigerante) {
                        conta = item5 * quantidade;
                    } else {
                        if (escolha >= 6) {
                            cout << "Item não consta no cadastro." << endl;  
                        }
                    }
                }
            }
        }
    }
    cout << "Total: R$" << conta;

    return 0;
}

