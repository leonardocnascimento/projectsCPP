/*
Exerc�cio sobre vetores
*/
#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    int first_vetor[5];

    for (int i = 0; i < 5; i++) {
        cout << "Informe o n�mero[" << i << "]:";
        cin >> first_vetor[i];    
    }

    for (int i = 0; i < 5; i++){
        cout << "O n�mero da posi��o [" << i << "]:" << first_vetor[i] << endl;
    }
    
    return 0;
}