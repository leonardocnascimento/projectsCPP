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
        cout << "Os n�meros " << A << " e " << B << " s�o m�ltiplos!";
        } else {
            cout << "Os n�meros " << A << " e " << B << " N�O s�o m�ltiplos!";
    }
    return 0;
}