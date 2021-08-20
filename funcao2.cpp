#include <iostream>
using namespace std;
//<Tipo da funcao> nome_funcao(argumentos)
float CalculaSoma(float n1,float n2) {
	float soma_dos_valores = n1 + n2;
	return soma_dos_valores;
}
float CalculaSub(float numero1, float numero2) {
	float sub = numero1 - numero2;
	return sub;
}
float CalculaMult(float num_1, float num_2) {
    float mult = num_1 * num_2;
    return mult;
}
float CalculaDiv(float number1, float number2) {
    float div = number1 / number2;
    return div;
}

int main() {
	float num1, num2, soma = 0, sub, mult, div; 
	cout << "Digite o numero 1: ";
	cin >> num1;
	cout << "Digite o numero 2: "; 
	cin >> num2;
	soma = CalculaSoma(num1, num2);
	sub = CalculaSub(num1, num2);
    mult = CalculaMult(num1, num2);
    div = CalculaDiv(num1, num2);
	
	cout << "A soma dos valores e: " << soma << endl;
	cout << "A subtracao e: " << sub << endl;
    cout << "A multiplicacao dos valores e: " << mult << endl;
	cout << "A divisao e: " << div << endl;
	
    return  0; 
}