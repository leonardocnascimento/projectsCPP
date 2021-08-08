/*
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

Entrada
O arquivo de entrada contém 1 valor inteiro qualquer.

Saída
Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.
*/
#include <iostream>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    int num = 1;

    cout << "Informe um número: ";
    cin >> num;

    while (num >= 1 && num <= 1000) {
        if (num % 2 != 0) {
            cout << num;
            num = num - 2;
        } // está em looping infinito. infelizmente não consegui retirar.
    }

    
    return 0;
}