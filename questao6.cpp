#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale (LC_ALL, "Portuguese");
    int A, B, C, D;
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;
    cout << "Digite o valor de D: ";
    cin >> D;
    
    if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0) {
        cout << "Valores aceitos";
    } else {
        cout << "Valores não aceitos";
    }

    return 0;
}