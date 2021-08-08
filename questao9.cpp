#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    setlocale (LC_ALL, "Portuguese");
    double N1, N2, N3, N4, nota_exame, media, media_final;
    std::cout << std::fixed;
    std::cout << setprecision(1);

    cout << "Informe a primeira nota: ";
    cin >> N1;
    cout << "Informe a segunda nota: ";
    cin >> N2;
    cout << "Informe a terceira nota: ";
    cin >> N3;
    cout << "Informe a quarta nota: ";
    cin >> N4;

    media = (N1 * 0.2) + (N2 * 0.3) + (N3 * 0.4) + (N4 * 0.1);

    cout << "Média: " << media << endl;
    if (media >= 7) {
        cout << "Aluno aprovado.";
    } else {
        if (media < 5) {
            cout << "Aluno reprovado.";
        } else {
            if (media >= 5 && media < 7) {
                cout << "Aluno em exame."<< endl;
                cout << "Nota do exame: ";
                cin >> nota_exame;
                
                media_final = (media + nota_exame) / 2;

                if (media_final >= 5) {
                    cout << "Aluno aprovado." << endl;
                } else {
                    cout << "Aluno reprovado." << endl;
                }
                cout << "Média final: " << media_final;
            }
        }
    }  
  
    return 0;
}