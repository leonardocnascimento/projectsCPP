/*
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os �mpares de 1 at� X, um valor por linha, inclusive o X, se for o caso.

Entrada
O arquivo de entrada cont�m 1 valor inteiro qualquer.

Sa�da
Imprima todos os valores �mpares de 1 at� X, inclusive X, se for o caso.
*/
#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    int num = 1;

    cout << "Informe um n�mero: ";
    cin >> num;

    while (num >= 1 && num <= 1000) {
        if (num % 2 != 0) {
            cout << num;
            num = num - 2;
        } // est� em looping infinito. infelizmente n�o consegui retirar.
    }

    
    return 0;
}