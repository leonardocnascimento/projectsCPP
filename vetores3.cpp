// programa pede idade de 5 alunos e calcula sua m�dia
#include <iostream>
using namespace std;
int main () {
    setlocale(LC_ALL, "Portuguese");
     int idade[5];
     int soma = 0;
     float media;

     for (int i = 0; i < 5; i++) {
         cout << "Informe a idade do aluno [" << i << "]: ";
         cin >> idade[i];       
     }

     for (int i = 0; i < 5; i++) { 
         soma = soma + idade[i];
    }

    media = (float) soma / 5;

    cout << "A m�dia de idade dos alunos �: " << media;

    return 0;
}