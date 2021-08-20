#include <iostream>
#include <cstring> //inclui a biblioteca de comandos de strings.
using namespace std;
int main (){
    setlocale (LC_ALL, "Portuguese"); //leitura de acentuações lingua portuguesa.
    char consoantes[100]; // vetor com 100 espaços.
    int qtd_cons = 0; // para iniciar a conta de consoantes da palavra.
    
    cout << "Digite a palavra: ";

    do {
        cin.getline (consoantes, 100); // para leitura de palavra com até 100 espaços.
    } while (strlen(consoantes) == 0); // repetição para garantir a leitura da palavra.
    
    for (int i = 0; i < strlen(consoantes); i ++){ //repetição para fazer a verificação de consoantes.
        if (consoantes[i] != 'a' && consoantes[i] != 'A' && consoantes[i] != 'e' && consoantes[i] != 'E' && consoantes[i] != 'i' && consoantes[i] != 'I' && consoantes[i] != 'o' && consoantes[i] != 'O' && consoantes[i] != 'u' && consoantes[i] != 'U') {
            cout << "encontrei a consoante: " << consoantes[i] << endl;
            qtd_cons++;
        } // condicionante retirando as vogais para contagem de consoantes no texto.
    }   
    
    cout << "A quantidade de consoantes digitadas foi: " << qtd_cons;


    return 0;
}