#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    float value;  //vari�vel flutuante para o usu�rio informar o n�mero.
    cout << "Digite um n�mero: ";
    cin >> value;
    if (value >= 0 && value <= 25) {
        cout << "intervalo [0, 25]";
    } else {
        if (value > 25 && value <= 50) {
            cout << "intervalo (25, 50]";
        } else {
            if (value > 50 && value <= 75) {
                cout << "intervalo (50, 75]";
            } else {
                if (value > 75 && value <=100) {
                    cout << "intervalo (75, 100]";
                } else {
                    cout << "fora de intervalo";
                }
            }
        }
    }
    
    return 0;
}
