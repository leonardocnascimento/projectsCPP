//solicitar um texto ao usu�rio e depois substitui uma letra, por uma letra informada pelo usu�rio.

#include <iostream>
#include <string.h>
using namespace std;
int main () {
    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    char letra;
    char letra_subst;

    cout << "Digite um texto: ";

    do {
        cin.getline(texto, 100);
    } while (strlen(texto) == 0);

    cout << "O texto escrito foi: " << texto << endl;
    cout << "Tamanho: " << strlen(texto) << endl;
    cout << "Digite a letra que ir� substitu�da: " << endl;
    cin >> letra_subst;

    cout << "Digite a letra que ir� substituir a letra escolhida: ";
    cin >> letra;

    for (int i = 0; i < strlen(texto); i++){
        if (texto[i] == letra_subst){
            texto[i] = letra;
        }
    }

    cout << "O texto modificado ficou: " << texto << endl;

    return 0;
}