/*
Estrutura de repetição
while
*/
#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale (LC_ALL, "Portuguese");
    	int qtd_alunos;
	float nota1, nota2, nota3, media;
	cout << "Digite a quantidade de alunos: ";
	cin >> qtd_alunos;
	int cont_alunos = 0;
	while (cont_alunos < qtd_alunos) {
		cout << "Digite o valor da nota 1: ";
		cin >> nota1;
		cout << "Digite o valor da nota 2: ";
		cin >> nota2;
		cout << "Digite o valor da nota 3: ";
		cin >> nota3;
		media = (nota1 + nota2 + nota3) / 3;
		cout << "Valor da média: " << media << endl;

	return 0;
}