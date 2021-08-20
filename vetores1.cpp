/*
Exercício sobre vetores
*/
#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    int first_vetor[5];

    for (int i = 0; i < 5; i++) {
        cout << "Informe o número[" << i << "]:";
        cin >> first_vetor[i];    
    }

    for (int i = 0; i < 5; i++){
        cout << "O número da posição [" << i << "]:" << first_vetor[i] << endl;
    }
    
    return 0;
}