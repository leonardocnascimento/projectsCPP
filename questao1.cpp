#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese"); //leitura de acentua��es e caracteres em pt.
    int num, num_par = 0; // variavel para condi��o e para mostrar o n�mero de pares.
    for (int i = 0; i < 5; i++) {
        cout << "Digite seu " << i+1 << "� n�mero: "; // solicita o n�mero na sequencia.
        cin >> num;
        if (num % 2 == 0) { //verificar se o n�mero � par
            num_par = num_par + 1;
            }   
        }
    cout << num_par << " valores pares" << endl; // mostrar quantas vezes a condi��o foi atendida.    
    return 0;
}