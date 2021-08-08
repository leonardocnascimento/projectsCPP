#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese"); //leitura de acentuações e caracteres em pt.
    int num, num_par = 0; // variavel para condição e para mostrar o número de pares.
    for (int i = 0; i < 5; i++) {
        cout << "Digite seu " << i+1 << "º número: "; // solicita o número na sequencia.
        cin >> num;
        if (num % 2 == 0) { //verificar se o número é par
            num_par = num_par + 1;
            }   
        }
    cout << num_par << " valores pares" << endl; // mostrar quantas vezes a condição foi atendida.    
    return 0;
}