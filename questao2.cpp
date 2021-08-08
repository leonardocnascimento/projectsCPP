#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    int A, B;
    cout << "Digite o valor de A: " << endl;
    cin >> A;
    cout << "Digite o valor de B: " << endl;
    cin >> B;
    if (A % B == 0 || B % A == 0 ){
        cout << "Os números " << A << " e " << B << " são múltiplos!";
        } else {
            cout << "Os números " << A << " e " << B << " NÃO são múltiplos!";
    }
    return 0;
}