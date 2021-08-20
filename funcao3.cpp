//criando uma calculadora
#include <iostream>
#include <cmath>
using namespace std;

float CalculaSoma(float num1,float num2) {
	float soma = num1 + num2;
	return soma;
}
float CalculaSub(float num1, float num2) {
	float sub = num1 - num2;
	return sub;
}
float CalculaMult(float num1, float num2) {
    float mult = num1 * num2;
    return mult;
}
float CalculaDiv(float num1, float num2) {
    float div = num1 / num2;
    return div;
}
//Procedimento -> variaveis restritas a propria funcao - E não um retorno
void CalculaFat(int num_fatorial) {
    int fat = 1;
    for (int i = num_fatorial; i >= 1; i--) {
        fat = fat * i;
    }
    cout << "o valor fatorado e: " << fat;
}

int main () {
    float num1, num2;
    float soma, sub, mult, div;
    char op;
    int num_fatorial;

    cout << "Informe os numeros que voce deseja operar: ";
    cin >> num1;
    cin >> num2;
    cout << "Digite: " << endl;
    cout << "+ -> para soma;" << endl << "- -> para subtracao;" << endl << "* -> para multiplicacao;" << endl << "/ -> para divisao;" << endl << "! -> para fatorial." << endl;
    cin >> op;
    switch (op) {
        case '+':
        soma = CalculaSoma(num1, num2);
		cout << "O valor da soma foi: " << soma << endl;
		break;
	
    case '-':
		sub = CalculaSub(num1, num2);
	cout << "O valor da subtracao foi: " << sub << endl;
		break;

    case '*':
        mult = CalculaMult(num1, num2);
    cout << "O valor da multiplicacao e: " << mult << endl;
        break;

    case '/':
        div = CalculaDiv(num1, num2);
    cout << "O valor da divisao e: " << div << endl;
        break;
    
    case '!':
    cout << "Digite o valor que voce quer fatorar: ";
    cin >> num_fatorial;
        CalculaFat(num_fatorial);
        break;
       }


    return 0;
}