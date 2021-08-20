#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    int vetor1 [10];

    for (int i = 0; i < 10; i++) {
        cout << "Informe o número [" << i << "]:";
        cin >> vetor1[i];
    }
    
    for (int i = 9; i >= 0; i--) {
        cout << "Ordem inversa [" << i << "]:" << vetor1[i] << endl;
    }

    return 0;
}